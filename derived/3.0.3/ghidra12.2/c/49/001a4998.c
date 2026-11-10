
void FUN_001a4998(long *param_1,long param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bc0ec8;
  local_60[0] = 0;
  *param_1 = (long)(PTR_DAT_04bcc290 + 0x10);
  local_50 = local_60;
  uStack_48 = 0x10;
  local_68 = puVar1 + 0x10;
  FUN_0018b070(&local_68,"ConnectionManager",0xffffffffffffffff);
  FUN_001991dc(param_1 + 2,&local_68);
  param_1[2] = (long)(PTR_DAT_04bcc298 + 0x10);
  local_68 = puVar1 + 0x10;
  FUN_0018b1a0(&local_68);
  FUN_001e1500(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = param_2;
  FUN_001ba590(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x25) = param_4;
  *(undefined1 *)((long)param_1 + 0x129) = param_5;
  *(undefined4 *)((long)param_1 + 300) = param_3;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  puVar3 = PTR_DAT_04bcb910;
  puVar1 = PTR_DAT_04bcb908;
  uVar7 = (uint)(byte)*PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 != 0) {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar7 = *puVar5;
  }
  *(uint *)(param_1 + 1) = uVar7;
  FUN_0019b354(param_1 + 2);
  puVar2 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*puVar1 == '\0') {
LAB_001a4ad4:
    plVar8 = plVar10;
  }
  else {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    uVar7 = *puVar5;
    if (uVar7 == 0) goto LAB_001a4ad4;
    lVar6 = **(long **)(puVar2 + 0xa0);
    if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar7) goto LAB_001a4cac;
    plVar8 = (long *)(*(long *)(lVar6 + (ulong)uVar7 * 8) + 0x10);
  }
  lVar6 = (**(code **)(**(long **)(*(long *)(*plVar8 + 0x10) + 0xe8) + 0x78))();
  FUN_001a4cd0(*(long *)(lVar6 + 0x18) + 0x90,0);
  if (*puVar1 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      plVar10 = (long *)(puVar2 + 0x18);
    }
    else {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar7) goto LAB_001a4cac;
      plVar10 = (long *)(*(long *)(lVar6 + (ulong)uVar7 * 8) + 0x10);
    }
  }
  lVar6 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x78))();
  *(undefined1 *)(lVar6 + 8) = 0;
  if (*(char *)(lVar6 + 9) != '\0') {
    lVar9 = *(long *)(*(long *)(lVar6 + 0x18) + 0xc0);
    if (lVar9 != 0) {
      bVar4 = FUN_001baef0(lVar9 + 0xf0,*(undefined4 *)(*(long *)(lVar6 + 0x18) + 8),1);
      *(byte *)(lVar6 + 9) = (bVar4 ^ 0xff) & 1;
    }
  }
  plVar10 = (long *)(puVar2 + 0x18);
  if (*(char *)((long)param_1 + 0x129) == '\0') {
    if (*puVar1 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
      uVar7 = *puVar5;
      if (uVar7 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar7) goto LAB_001a4cac;
        plVar10 = (long *)(*(long *)(lVar6 + (ulong)uVar7 * 8) + 0x10);
      }
    }
    lVar6 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x78))();
    *(undefined1 *)(lVar6 + 8) = 0;
    pbVar11 = (byte *)(lVar6 + 9);
    if (*pbVar11 == 0) {
      return;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0x18) + 0xc0);
    if (lVar9 == 0) {
      return;
    }
    bVar4 = FUN_001baef0(lVar9 + 0xf0,*(undefined4 *)(*(long *)(lVar6 + 0x18) + 8),1);
    bVar4 = bVar4 ^ 1;
  }
  else {
    if (*puVar1 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
      uVar7 = *puVar5;
      if (uVar7 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar7) {
LAB_001a4cac:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar10 = (long *)(*(long *)(lVar6 + (ulong)uVar7 * 8) + 0x10);
      }
    }
    lVar6 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x78))();
    *(undefined1 *)(lVar6 + 8) = 1;
    lVar9 = *(long *)(*(long *)(lVar6 + 0x18) + 0xc0);
    if (lVar9 == 0) {
      return;
    }
    bVar4 = FUN_001bb090(lVar9 + 0xf0,*(long *)(lVar6 + 0x18),1,0);
    pbVar11 = (byte *)(lVar6 + 9);
  }
  *pbVar11 = bVar4 & 1;
  return;
}

