
ulong FUN_0027db70(long param_1)

{
  ulong uVar1;
  int *piVar2;
  
  if ((ulong)*(ushort *)(param_1 + 0xa0) == 0) {
    return 0xff;
  }
  uVar1 = 0;
  piVar2 = *(int **)(param_1 + 0x78);
  while (((((((((*(byte *)(param_1 + 0x80) == uVar1 || (*(byte *)(param_1 + 0x81) == uVar1)) ||
               (*(byte *)(param_1 + 0x82) == uVar1)) ||
              (((*(byte *)(param_1 + 0x83) == uVar1 || (*(byte *)(param_1 + 0x84) == uVar1)) ||
               ((*(byte *)(param_1 + 0x85) == uVar1 ||
                ((*(byte *)(param_1 + 0x86) == uVar1 || (*(byte *)(param_1 + 0x87) == uVar1))))))))
             || (*(byte *)(param_1 + 0x88) == uVar1)) ||
            (((((*(byte *)(param_1 + 0x89) == uVar1 || (*(byte *)(param_1 + 0x8a) == uVar1)) ||
               (*(byte *)(param_1 + 0x8b) == uVar1)) ||
              ((*(byte *)(param_1 + 0x8c) == uVar1 || (*(byte *)(param_1 + 0x8d) == uVar1)))) ||
             (*(byte *)(param_1 + 0x8e) == uVar1)))) ||
           (((*(byte *)(param_1 + 0x8f) == uVar1 || (*(byte *)(param_1 + 0x90) == uVar1)) ||
            (((*(byte *)(param_1 + 0x91) == uVar1 ||
              (((*(byte *)(param_1 + 0x92) == uVar1 || (*(byte *)(param_1 + 0x93) == uVar1)) ||
               (*(byte *)(param_1 + 0x94) == uVar1)))) ||
             (((*(byte *)(param_1 + 0x95) == uVar1 || (*(byte *)(param_1 + 0x96) == uVar1)) ||
              (*(byte *)(param_1 + 0x97) == uVar1)))))))) ||
          (((*(byte *)(param_1 + 0x98) == uVar1 || (*(byte *)(param_1 + 0x99) == uVar1)) ||
           ((*(byte *)(param_1 + 0x9a) == uVar1 ||
            (((*(byte *)(param_1 + 0x9b) == uVar1 || (*(byte *)(param_1 + 0x9c) == uVar1)) ||
             (*(byte *)(param_1 + 0x9d) == uVar1)))))))) ||
         (((*(byte *)(param_1 + 0x9e) == uVar1 || (*(byte *)(param_1 + 0x9f) == uVar1)) ||
          (*piVar2 == 1))))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0xc;
    if (*(ushort *)(param_1 + 0xa0) == uVar1) {
      return 0xff;
    }
  }
  return uVar1;
}

