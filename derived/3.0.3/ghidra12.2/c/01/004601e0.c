
void FUN_004601e0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  ulong local_38;
  
  uVar1 = FUN_00428440(param_1[1]);
  switch(uVar1 & 0x1f) {
  case 2:
  case 4:
  case 5:
  case 6:
    goto switchD_00460224_caseD_2;
  case 3:
    plVar3 = (long *)FUN_00428370(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00460260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x40))(plVar3,*param_1,param_1[1]);
    return;
  case 7:
    FUN_00427c30(&local_50,param_1[1],0);
    do {
      if (local_50 + 1 < local_48) {
        local_50 = local_50 + 1;
        uVar1 = FUN_004290b0();
      }
      else {
        uVar2 = FUN_00427c40(&local_50);
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar1 = FUN_004290b0(local_50);
      }
      if ((uVar1 >> 5 & 1) != 0) {
        FUN_0043f280(&local_68,param_1,*local_50);
        FUN_004596c0(&local_68);
        if ((local_58 & 1) != 0) {
          FUN_0043dd50(local_58 & 0xfffffffffffffffe);
        }
      }
    } while( true );
  case 8:
    local_40 = 0;
    local_38 = 0;
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_50);
    puVar4 = local_48;
    if (((local_48 != (undefined8 *)0x0) &&
        (((uVar2 = FUN_00428440(local_48), (uVar2 & 0x1f) == 7 ||
          (uVar2 = FUN_00428440(puVar4), (uVar2 & 0x1f) == 3)) ||
         (uVar2 = FUN_00428440(puVar4), (uVar2 & 0x1f) == 8)))) && (0 < (int)local_40)) {
      iVar5 = 0;
      do {
        while( true ) {
          local_68 = (undefined8 *)((long)local_50 + (long)local_40._4_4_ * (long)iVar5);
          local_60 = (long)local_48;
          local_58 = local_38;
          if ((local_38 & 1) != 0) break;
          FUN_004596c0(&local_68);
          iVar5 = iVar5 + 1;
          if ((int)local_40 <= iVar5) goto LAB_004603c0;
        }
        uVar2 = local_38 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar2);
        FUN_004596c0(&local_68);
        FUN_0043dd50(uVar2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_40);
    }
LAB_004603c0:
    plVar3 = (long *)FUN_00428370(param_1[1]);
    (**(code **)(*plVar3 + 0x70))(plVar3,*param_1,param_1[1]);
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
switchD_00460224_caseD_2:
    return;
  default:
    local_40 = 0;
    local_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)&DAT_0413df78;
    puVar4 = (undefined8 *)
             FUN_004223c0(0x261011c5,
                          "../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x3c,
                          "Bad var visitor switch",&local_50);
    *puVar4 = &PTR_LAB_04863148;
    nn::os::FinalizeMutex((MutexType *)(puVar4 + 3));
    *puVar4 = &PTR_LAB_0485b0a8;
    return;
  }
}

