
void FUN_003d4ea4(long *param_1,char *param_2)

{
  char *pcVar1;
  
  if (((((*param_2 == 'B') && (param_2[1] == 'A')) && (param_2[2] == 'W')) &&
      (((param_2[3] == 'S' && (param_2[4] == 'D')) &&
       ((param_2[5] == ' ' && ((param_2[6] == ' ' && (param_2[7] == ' ')))))))) &&
     ((*(short *)(param_2 + 0xc) == -0x101 &&
      (((((*(int *)(param_2 + 8) == 0x10000 &&
          (pcVar1 = (char *)nn::util::BinaryFileHeader::GetFirstBlock(), pcVar1 != (char *)0x0)) &&
         (*pcVar1 == 'I')) && ((pcVar1[1] == 'N' && (pcVar1[2] == 'F')))) && (pcVar1[3] == 'O'))))))
  {
    *param_1 = (long)(pcVar1 + 0x10);
  }
  return;
}

