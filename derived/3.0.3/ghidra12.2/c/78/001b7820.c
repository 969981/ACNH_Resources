
undefined8 FUN_001b7820(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  char local_38;
  undefined1 local_37;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar5 = *(long *)(param_1 + 0x138);
  do {
    if (lVar5 == param_1 + 0x130) {
      uVar6 = 1;
LAB_001b794c:
      (**(code **)(*plVar7 + 0x20))(plVar7);
      return uVar6;
    }
    FUN_001b8014(auStack_a0);
    if (local_38 == '\0') {
      FUN_001b8590(auStack_a0);
    }
    FUN_001e15a8(local_98,param_3);
    local_37 = 0;
    uVar4 = (**(code **)(**(long **)(lVar5 + 0x10) + 0x10))
                      (*(long **)(lVar5 + 0x10),param_2,auStack_a0);
    if ((uVar4 & 1) != 0) {
      FUN_001b8504(auStack_a0);
      uVar6 = 0;
      goto LAB_001b794c;
    }
    lVar5 = *(long *)(lVar5 + 8);
    FUN_001b8504(auStack_a0);
  } while( true );
}

