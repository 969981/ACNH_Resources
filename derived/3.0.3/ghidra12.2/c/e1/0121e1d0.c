
void FUN_0121e1d0(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_74 [4];
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  ulong local_48;
  
  puVar3 = PTR_DAT_04bb46f0;
  piVar1 = (int *)(param_1 + 0x6a000);
  uVar4 = FUN_0262b678(*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
  lVar5 = FUN_0262b678(*(long *)puVar3 + 0xe99e0);
  puVar2 = PTR_DAT_04bb37e0;
  local_48 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uVar4 = 0;
  lVar5 = param_1;
  do {
    if (((*(byte *)(param_3 + (uVar4 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar4 & 7) & 1) != 0) &&
       (*(short *)(lVar5 + 8) == -2)) {
      local_70 = 0xfffe;
      FUN_0277d4ac(&local_70);
      local_68 = 0;
      uVar6 = FUN_0263e624(auStack_74,uVar4 & 0xffffffff,param_2,&local_48);
      if (((uVar6 & 1) != 0) && (local_68 == 10)) {
        uVar6 = FUN_0261fb40(*(undefined8 *)puVar3,lVar5,uVar4 & 0xffffffff,param_2,1);
        if (((uVar6 & 1) == 0) || (*(short *)(lVar5 + 8) == -2)) {
          *(undefined2 *)(lVar5 + 8) = *(undefined2 *)puVar2;
          *(undefined *)(lVar5 + 10) = puVar2[2];
          *(undefined *)(lVar5 + 0xb) = puVar2[3];
          *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(puVar2 + 4);
        }
        else {
          *(undefined4 *)(lVar5 + 0xd0) = local_64;
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

