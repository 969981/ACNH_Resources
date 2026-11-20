
long FUN_03eb5ae0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_48;
  
  lVar8 = param_2[1];
  lVar4 = FUN_039a7bd0(param_1,param_3,param_4);
  puVar1 = PTR_DAT_04bb2020;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = lVar8;
    uVar6 = (ulong)*(ushort *)(*(long *)(lVar8 + 0x20) + 0xdc);
    if (uVar6 != 0) {
      lVar9 = 0x430;
      do {
        pcStack_68 = (char *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x28) + lVar9 + -0x420) + 8) + 2
                             );
        local_70 = puVar1 + 0x10;
        lVar5 = FUN_039a8120(lVar4,lVar8,&local_70,param_4);
        if (lVar5 == 0) break;
        bVar2 = uVar6 * 0x430 != lVar9;
        lVar9 = lVar9 + 0x430;
      } while (bVar2);
    }
  }
  if (*(char *)(param_3 + 0x18) != '\0') {
    local_48 = 0;
    local_70 = puVar1 + 0x10;
    pcStack_68 = "output/DecalAOObject.bgsysdclao";
    plVar7 = (long *)*param_2;
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar6 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb2860);
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_70,&local_48);
    if (lVar8 != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x80);
      lVar9 = FUN_039bbf70(&local_48,param_4);
      *(long *)(lVar4 + 0x68) = lVar9;
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        if (*(int *)(lVar9 + 0x2d0) < *(int *)(lVar9 + 0x2d4)) {
          *(long *)(*(long *)(lVar9 + 0x2d8) + (long)*(int *)(lVar9 + 0x2d0) * 8) = lVar4;
          *(int *)(lVar9 + 0x2d0) = *(int *)(lVar9 + 0x2d0) + 1;
        }
        if (*(long *)(lVar9 + 0x2c8) == 0) {
          *(long *)(lVar9 + 0x2c8) = lVar4;
        }
        lVar9 = *(long *)(lVar4 + 0x68);
      }
      FUN_03964240(&local_70,lVar8);
      (**(code **)(*(long *)(lVar9 + 0xf0) + 0x50))((long *)(lVar9 + 0xf0),local_70);
    }
  }
  return lVar4;
}

