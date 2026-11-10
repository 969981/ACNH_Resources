
bool FUN_001c0754(long param_1,undefined4 param_2,undefined4 param_3,ushort param_4,short param_5,
                 short param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  char local_68;
  undefined1 local_67;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  local_d0 = param_2;
  local_cc = (short)param_3;
  lVar6 = FUN_001bf4b0(param_1,&local_d0);
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x120) != 0) {
      FUN_001b8014(&local_d0);
      lVar1 = param_7 + 0x140;
      if (local_68 == '\0') {
        FUN_001b8590(&local_d0);
      }
      FUN_001e15a8(local_c8,lVar1);
      local_67 = 0;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x10))
                        (*(long **)(param_1 + 0x120),&local_d0,param_3);
      if (local_68 == '\0') {
        FUN_001b8590(&local_d0);
        FUN_001e15a8(lVar1,local_c8);
        FUN_001b8504(&local_d0);
      }
      else {
        FUN_001e15a8(lVar1,local_c8);
        FUN_001b8504(&local_d0);
      }
      if ((uVar5 & 1) != 0) goto LAB_001c08f0;
    }
    puVar3 = PTR_DAT_04bcbcb0;
    *(short *)(param_7 + 0xac) = (short)param_3;
    *(undefined4 *)(param_7 + 0x1e8) = param_2;
    *(undefined8 *)(param_7 + 0x1d0) = *(undefined8 *)puVar3;
    *(ushort *)(param_7 + 0x44) = param_4 & 0xff | param_6 << 8;
    *(ushort *)(param_7 + 0x42) = param_4 & 0xff | param_5 << 8;
    (**(code **)(**(long **)(param_1 + 0x328) + 0x18))(*(long **)(param_1 + 0x328),param_7,1);
  }
LAB_001c08f0:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return lVar6 != 0;
}

