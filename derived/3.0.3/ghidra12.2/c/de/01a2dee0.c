
void FUN_01a2dee0(long param_1,byte param_2)

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
  
  if (*(int *)(param_1 + 0x174) == 3) {
    *(byte *)(param_1 + 0x399) = param_2 & 1;
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
          if ((*(char *)((long)local_70 + ((ulong)*(uint *)(local_70 + 0x6d) & 1) * 0x20 + 0x389) ==
               '\0') || ((char)local_70[((ulong)*(uint *)(local_70 + 0x6d) & 1) * 4 + 0x71] != '\0')
             ) {
            *(byte *)((long)local_70 + 0x44c) = param_2 & 1;
          }
          if ((param_2 & 1) == 0) {
            local_44 = *(undefined4 *)(local_70[0xd] + 0x2b4);
            (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_44)
            ;
          }
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x394));
    }
  }
  return;
}

