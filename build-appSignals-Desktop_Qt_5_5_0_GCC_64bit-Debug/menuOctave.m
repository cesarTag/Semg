function menuOctave(path,opcion)
if(nargin!=2)
    fprintf(2,"Error, el número de parámetros debe ser 2\n");
    disp("error");
	  return
  endif
 
 X=load(path);
 
 switch (opcion)
  	case "fft"
  			sig = fft(X(:,2));
  			y = abs(real(sig));
  			%plot(y);
			  fprintf(stdout, "%f ", y);

  	case "dft"
    		sig = dft(X(:,2));
  			y = abs(real(sig));
  			%plot(y);
			fprintf(1, "%f ", y);

  	case "dgt"
  			a=20;
  			M=40;	
    		sig = dgt(X(:,2),'gauss',a,M);  			
        %h=plotdgt(sig,a,'linsq');
        %saveas(h,"gabor",".png");
  			fprintf(1, "%f ", sig);
	  case 'wdst'
        sig = wignervilledist(X(:,2));
        %plotquadtfdist(sig);
        fprintf(1, '%f ', sig);
        
    case 'sgram'
        % sampling rate of the test signal, only important for plotting
        fs=1000;

        % Length of signal
        Ls=length(X(:,2));

        %h = figure(1);
        %clf();                                             %clear current figure
        c_sgram=sgram(X(:,2),fs,'lin');
        fprintf(1, '%f ', c_sgram);
        %title('Spectrogram of the bat test signal.');
        %saveas (h, 'plot-sgram', 'png');
  	otherwise
    		fprintf(stdout,"Opcion no valida");
endswitch
  fprintf(stdout,"fin");
  %exit;
  endfunction
