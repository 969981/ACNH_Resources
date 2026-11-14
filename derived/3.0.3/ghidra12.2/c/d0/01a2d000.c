
undefined8 FUN_01a2d000(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_74;
  long *local_70;
  char local_68;
  char local_66;
  
  puVar5 = PTR_DAT_04bbfcc0;
  puVar4 = PTR_DAT_04bbfcb8;
  if (*(int *)(param_1 + 0x394) < 1) {
    return 1;
  }
  uVar9 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  lVar10 = param_1 + 0x274;
  do {
    local_74 = *(undefined4 *)(param_1 + 0x230);
    lVar3 = lVar10;
    if (3 < uVar9) {
      lVar3 = param_1 + 0x274;
    }
    FUN_0071cb58(&local_70,lVar3,&local_74,0);
    plVar6 = local_70;
    if (local_70 != (long *)0x0) {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,puVar4);
      if ((uVar8 & 1) == 0) {
        local_66 = '\0';
      }
    }
    plVar6 = local_70;
    if (((local_70 != (long *)0x0) && (local_68 != '\0')) && (local_66 != '\0')) {
      plVar2 = local_70 + 0x6b;
      uVar8 = (ulong)*(uint *)(local_70 + 0x6d) & 1;
      lVar3 = (long)local_70 + (uVar8 ^ 1) * 0x20 + 0x36c;
      if (*(int *)(lVar3 + 0x18) == 2) {
        uVar8 = (**(code **)(local_70[0x6b] + 0x28))(plVar2,lVar3,(long)local_70 + 0x40c);
        if ((uVar8 & 1) != 0) goto LAB_01a2d07c;
        uVar8 = (ulong)*(uint *)(plVar6 + 0x6d) & 1;
      }
      uVar8 = (**(code **)(plVar6[0x6b] + 0x28))
                        (plVar2,(long)plVar6 + uVar8 * 0x20 + 0x36c,(long)plVar6 + 0x40c);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
LAB_01a2d07c:
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 4;
    if ((long)*(int *)(param_1 + 0x394) <= (long)uVar9) {
      return 1;
    }
  } while( true );
}

