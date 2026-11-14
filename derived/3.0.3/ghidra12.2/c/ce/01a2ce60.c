
void FUN_01a2ce60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *local_70;
  char local_68;
  char local_67;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bbfcc0;
  puVar3 = PTR_DAT_04bbfcb8;
  if (0 < *(int *)(param_1 + 0x394)) {
    uVar8 = 0;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    lVar9 = param_1 + 0x274;
    do {
      local_44 = *(undefined4 *)(param_1 + 0x230);
      lVar2 = lVar9;
      if (3 < uVar8) {
        lVar2 = param_1 + 0x274;
      }
      FUN_0071c8d0(&local_70,lVar2,&local_44,0);
      plVar5 = local_70;
      if (local_70 != (long *)0x0) {
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,puVar3);
        if ((uVar7 & 1) == 0) {
          local_67 = '\0';
        }
      }
      if (((local_70 != (long *)0x0) && (local_68 != '\0')) && (local_67 != '\0')) {
        *(undefined2 *)((long)local_70 + 0x444) = *(undefined2 *)(param_1 + 0x390);
        if (*(char *)((long)local_70 + 0x3ac) == '\0') {
          *(undefined1 *)((long)local_70 + 0x3ac) = 1;
        }
        *(undefined2 *)((long)local_70 + 0x40c) = *(undefined2 *)(param_1 + 0x360);
        *(undefined1 *)((long)local_70 + 0x40e) = *(undefined1 *)(param_1 + 0x362);
        *(undefined1 *)((long)local_70 + 0x40f) = *(undefined1 *)(param_1 + 0x363);
        *(undefined4 *)(local_70 + 0x82) = *(undefined4 *)(param_1 + 0x364);
        *(undefined4 *)((long)local_70 + 0x414) = *(undefined4 *)(param_1 + 0x368);
        *(undefined4 *)(local_70 + 0x83) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined1 *)((long)local_70 + 0x41c) = *(undefined1 *)(param_1 + 0x370);
        FUN_0076b954(local_70 + 0x6b,param_1 + 0x360,local_70 + 0x4f,1,0,0,0,0,0);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0x394));
  }
  return;
}

