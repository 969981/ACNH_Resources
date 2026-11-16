
void FUN_026031e0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*(byte *)(param_1 + 0x18));
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar4 = FUN_026eec4c();
  }
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x18358) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x18358), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar6 = 0;
    lVar1 = *(long *)(lVar4 + 0x18340) + *(long *)(lVar4 + 0x18338);
    uVar2 = *(uint *)(lVar1 + 0x5498);
    if ((*(byte *)(lVar1 + 0x549f) != 0 ||
         (((ulong)uVar2 != 0 || *(ushort *)(lVar1 + 0x549c) != 0) || *(byte *)(lVar1 + 0x549e) != 0)
        ) && ((uint)*(byte *)(lVar1 + 0x549f) ==
              ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
      lVar6 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)(lVar1 + 0x549e)) & 0x3f);
      lVar6 = (long)(lVar6 + ((ulong)((int)lVar6 - (uint)*(ushort *)(lVar1 + 0x549c)) << 0x20) +
                    -0x7f1cd4ef00000000) >> 0x20;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x18358) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x18358) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "CurMilePoint";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,lVar6);
    }
  }
  return;
}

