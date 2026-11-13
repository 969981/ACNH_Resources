
undefined8 FUN_011c8e30(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined *local_30;
  char *pcStack_28;
  
  lVar2 = param_1 + 0x278 + (ulong)param_2 * 0x120;
  if (999 < param_2) {
    lVar2 = param_1 + 0x278;
  }
  if (*(int *)(lVar2 + 0xfc) != 4) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "PlantStep";
    if (((*(int *)(lVar2 + 0xfc) == 0) || (*(int *)(lVar2 + 0xfc) == 2)) &&
       (*(char *)(lVar2 + 0x11a) == -1)) {
      lVar3 = 1;
      pfVar5 = (float *)&DAT_050d89d0;
      while (pfVar5[-0xb] != pfVar5[-10]) {
        if (pfVar5[-1] == *pfVar5) goto LAB_011c8efc;
        lVar3 = lVar3 + 2;
        pfVar5 = pfVar5 + 0x14;
        if (lVar3 == 0x79) {
          *(undefined1 *)(lVar2 + 0x11a) = 0xff;
          return 0;
        }
      }
      lVar3 = lVar3 + -1;
LAB_011c8efc:
      uVar1 = (uint)lVar3 & 0xff;
      *(char *)(lVar2 + 0x11a) = (char)lVar3;
      if (uVar1 != 0xff) {
        puVar4 = &DAT_050d8988 + (ulong)(uint)(int)(char)lVar3 * 5;
        if (0x77 < uVar1) {
          puVar4 = &DAT_050d8988;
        }
        FUN_0359e360(puVar4,&local_30);
        *(ulong *)(lVar2 + 0x108) = *(ulong *)(lVar2 + 0x108) | 0x1000000000;
        return 1;
      }
    }
  }
  return 0;
}

