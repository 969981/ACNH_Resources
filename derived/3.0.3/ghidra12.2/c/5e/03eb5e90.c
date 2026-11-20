
long FUN_03eb5e90(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                 undefined8 param_5,uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  lVar9 = param_2[1];
  lVar4 = FUN_039a7bd0(param_1,param_4,param_7);
  puVar1 = PTR_DAT_04bb2020;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = lVar9;
    uVar7 = (ulong)*(ushort *)(*(long *)(lVar9 + 0x20) + 0xdc);
    if (uVar7 != 0) {
      lVar10 = 0x430;
      do {
        pcStack_70 = (char *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x28) + lVar10 + -0x420) + 8) +
                             2);
        local_78 = puVar1 + 0x10;
        lVar5 = FUN_039a8120(lVar4,lVar9,&local_78,param_7);
        if (lVar5 == 0) break;
        bVar2 = uVar7 * 0x430 != lVar10;
        lVar10 = lVar10 + 0x430;
      } while (bVar2);
    }
  }
  if (*(char *)(param_4 + 0x18) != '\0') {
    local_68 = 0;
    local_78 = puVar1 + 0x10;
    pcStack_70 = "output/DecalAOObject.bgsysdclao";
    plVar8 = (long *)*param_2;
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar7 = (**(code **)*plVar8)(plVar8,PTR_DAT_04bb2860);
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
    lVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_78,&local_68);
    if (lVar9 != 0) {
      local_68 = CONCAT44(local_68._4_4_,0x80);
      lVar10 = FUN_039bbf70(&local_68,param_7);
      *(long *)(lVar4 + 0x68) = lVar10;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        if (*(int *)(lVar10 + 0x2d0) < *(int *)(lVar10 + 0x2d4)) {
          *(long *)(*(long *)(lVar10 + 0x2d8) + (long)*(int *)(lVar10 + 0x2d0) * 8) = lVar4;
          *(int *)(lVar10 + 0x2d0) = *(int *)(lVar10 + 0x2d0) + 1;
        }
        if (*(long *)(lVar10 + 0x2c8) == 0) {
          *(long *)(lVar10 + 0x2c8) = lVar4;
        }
        lVar10 = *(long *)(lVar4 + 0x68);
      }
      FUN_03964240(&local_78,lVar9);
      (**(code **)(*(long *)(lVar10 + 0xf0) + 0x50))((long *)(lVar10 + 0xf0),local_78);
    }
  }
  if ((param_6 & 1) == 0) {
    uVar6 = 1;
    local_78 = *(undefined **)(param_3 + 8);
  }
  else {
    local_78 = (undefined *)param_2[1];
    uVar6 = 2;
    pcStack_70 = *(char **)(param_3 + 8);
  }
  FUN_039a8dc0(lVar4,&local_78,uVar6,param_5,param_7);
  return lVar4;
}

