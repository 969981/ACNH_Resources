
void FUN_001d2044(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5
                 ,long param_6,undefined4 *param_7)

{
  void *pvVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte local_9c [4];
  undefined8 local_98;
  ulong local_90;
  long local_88 [5];
  long local_60;
  long lStack_58;
  ulong local_50;
  long lStack_48;
  byte local_38 [4];
  undefined2 local_34 [2];
  
  *(undefined8 *)(param_7 + 4) = 4;
  uVar4 = 0;
  switch(param_3) {
  case 1:
    if (param_6 == 0) {
      uVar4 = 0;
      goto switchD_001d2090_caseD_4;
    }
    uVar4 = FUN_001e1884(param_2 + 0x140);
    uVar3 = FUN_001e14f8(param_2 + 0x140);
    local_60 = CONCAT62(local_60._2_6_,uVar3);
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    memcpy(&local_98,&local_50,4);
    memcpy((void *)((long)&local_98 + 4),&local_60,2);
    plVar9 = *(long **)(param_6 + 8);
    plVar7 = &local_98;
    uVar10 = 6;
    lVar11 = *plVar9;
    break;
  case 2:
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d2394:
      plVar7 = *(long **)(PTR_DAT_04bcbb78 + (ulong)param_5 * 0x2a8 + 0x118);
    }
    else {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar8 == 0) goto LAB_001d2394;
      plVar7 = *(long **)(*(long *)(PTR_DAT_04bcbb78 + (ulong)param_5 * 0x2a8 + 0x10) +
                          (ulong)*puVar8 * 0x148 + 0x100);
    }
    if (plVar7 != (long *)0x0) {
      lVar11 = *(long *)(param_2 + 0x138);
      uVar4 = 0x12345678;
      if ((lVar11 != 0) && (lStack_48 = *(long *)(lVar11 + 0x18), lStack_48 != 0)) {
        local_50 = 0;
        local_90 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28);
        local_98 = (undefined *)0x0;
        uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_98,&local_50,2);
      }
      goto switchD_001d2090_caseD_4;
    }
LAB_001d254c:
    uVar4 = 0x9999;
    goto switchD_001d2090_caseD_4;
  case 3:
    local_34[0] = *(undefined2 *)(param_2 + 0x70);
    local_38[0] = *(byte *)(param_2 + 0xa0);
    lVar11 = FUN_001932e0(param_4);
    local_90 = CONCAT35(local_90._5_3_,1);
    local_98 = PTR_DAT_04bcc018 + 0x10;
    FUN_00196a24(&local_98,lVar11 + 3,0);
    uVar5 = FUN_0019cd8c(param_4);
    uVar6 = FUN_001932e0(param_4);
    FUN_00193030(&local_98,uVar5,uVar6,0xffffffffffffffff);
    FUN_00193030(&local_98,local_34,2,0xffffffffffffffff);
    FUN_00193030(&local_98,local_38,1,0xffffffffffffffff);
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d23f8:
      plVar7 = *(long **)(PTR_DAT_04bcbb78 + (ulong)param_5 * 0x2a8 + 0x118);
      if (plVar7 == (long *)0x0) goto LAB_001d2254;
LAB_001d2414:
      lVar11 = *(long *)(param_2 + 0x138);
      if (lVar11 == 0) {
        if (local_88[1] == 0) goto LAB_001d25b8;
        uVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,local_88[0] + local_88[3],local_88[1]);
      }
      else if (*(long *)(lVar11 + 0x18) == 0 && local_88[1] == 0) {
LAB_001d25b8:
        uVar4 = 0x12345678;
      }
      else {
        local_60 = local_88[1];
        lStack_48 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28);
        lStack_58 = *(long *)(lVar11 + 0x18);
        local_50 = local_88[0] + local_88[3];
        uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_50,&local_60,2);
      }
    }
    else {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar8 == 0) goto LAB_001d23f8;
      plVar7 = *(long **)(*(long *)(PTR_DAT_04bcbb78 + (ulong)param_5 * 0x2a8 + 0x10) +
                          (ulong)*puVar8 * 0x148 + 0x100);
      if (plVar7 != (long *)0x0) goto LAB_001d2414;
LAB_001d2254:
      uVar4 = 0x9999;
    }
    FUN_00196ce0(&local_98);
  default:
    goto switchD_001d2090_caseD_4;
  case 6:
    uVar10 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    local_38[0] = *(byte *)(param_2 + 0x43) & 0xf | *(char *)(param_2 + 0x42) << 4;
    local_9c[0] = *(byte *)(param_2 + 0x45) & 0xf | *(char *)(param_2 + 0x44) << 4;
    local_60 = CONCAT62(local_60._2_6_,*(undefined2 *)(param_2 + 0x70));
    local_34[0] = CONCAT11(local_34[0]._1_1_,*(undefined1 *)(param_2 + 0xa1));
    if (*(long *)(param_2 + 0x138) != 0) {
      local_50 = CONCAT44((int)uVar10,(int)*(undefined8 *)(*(long *)(param_2 + 0x138) + 0x18));
    }
    local_98 = PTR_DAT_04bcc6d0 + 0x10;
    local_90 = 2;
    plVar7 = local_88;
    memcpy(plVar7,&local_60,2);
    uVar10 = local_90;
    if (local_90 < local_90 + 1) {
      uVar10 = local_90 + 1;
    }
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                   0xe0000019,0);
    }
    pvVar1 = (void *)((long)plVar7 + local_90);
    local_90 = uVar10;
    memcpy(pvVar1,local_34,1);
    uVar10 = local_90;
    if (local_90 < local_90 + 1) {
      uVar10 = local_90 + 1;
    }
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                   0xe0000019,0);
    }
    pvVar1 = (void *)((long)plVar7 + local_90);
    local_90 = uVar10;
    memcpy(pvVar1,local_38,1);
    uVar10 = local_90;
    if (local_90 < local_90 + 1) {
      uVar10 = local_90 + 1;
    }
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                   0xe0000019,0);
    }
    pvVar1 = (void *)((long)plVar7 + local_90);
    local_90 = uVar10;
    memcpy(pvVar1,local_9c,1);
    uVar10 = local_90 + 4;
    if (local_90 + 4 <= local_90) {
      uVar10 = local_90;
    }
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                   0xe0000019,0);
    }
    pvVar1 = (void *)((long)plVar7 + local_90);
    local_90 = uVar10;
    memcpy(pvVar1,&local_50,4);
    uVar10 = local_90;
    puVar2 = PTR_DAT_04bcbb78;
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d2554:
      plVar9 = *(long **)(puVar2 + (ulong)param_5 * 0x2a8 + 0x118);
    }
    else {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar8 == 0) goto LAB_001d2554;
      plVar9 = *(long **)(*(long *)(puVar2 + (ulong)param_5 * 0x2a8 + 0x10) + (ulong)*puVar8 * 0x148
                         + 0x100);
    }
    if (plVar9 == (long *)0x0) goto LAB_001d254c;
    if (uVar10 == 0) {
      uVar4 = 0x12345678;
      goto switchD_001d2090_caseD_4;
    }
    lVar11 = *plVar9;
  }
  uVar4 = (**(code **)(lVar11 + 0x28))(plVar9,plVar7,uVar10);
switchD_001d2090_caseD_4:
  *param_7 = uVar4;
  return;
}

