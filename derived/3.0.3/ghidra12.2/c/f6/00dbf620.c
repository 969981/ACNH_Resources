
void FUN_00dbf620(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_7c [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  puVar3 = PTR_DAT_04bb46f0;
  piVar1 = (int *)(param_1 + 0x6a000);
  uVar4 = FUN_0262b678(*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
  lVar5 = FUN_0262b678(*(long *)puVar3 + 0xe99e0);
  puVar2 = PTR_DAT_04bb37e0;
  local_68 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uVar4 = 0;
  lVar5 = param_1;
  do {
    if (((*(byte *)(param_5 + (uVar4 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar4 & 7) & 1) != 0) &&
       (*(short *)(lVar5 + 8) == -2)) {
      local_78 = 0xfffe;
      FUN_0277d4ac(&local_78);
      local_70 = 0;
      uVar6 = FUN_0263e624(auStack_7c,uVar4 & 0xffffffff,param_2,&local_68);
      if (((uVar6 & 1) != 0) && ((char)local_6c != '\0')) {
        uVar6 = FUN_0261fb40(*(undefined8 *)puVar3,lVar5,uVar4 & 0xffffffff,param_2,param_3 & 1);
        if (((uVar6 & 1) == 0) || (*(short *)(lVar5 + 8) == -2)) {
          *(undefined2 *)(lVar5 + 8) = *(undefined2 *)puVar2;
          *(undefined *)(lVar5 + 10) = puVar2[2];
          *(undefined *)(lVar5 + 0xb) = puVar2[3];
          *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(puVar2 + 4);
        }
        else {
          *(undefined4 *)(lVar5 + 0xd0) = local_6c;
          if (*piVar1 < *(int *)(param_1 + 0x6a004)) {
            *(long *)(*(long *)(param_1 + 0x6a008) + (long)*piVar1 * 8) = lVar5;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0xd4;
  } while (uVar4 != 0x800);
  *(undefined1 *)(*(long *)puVar3 + 8) = 0;
  return;
}

