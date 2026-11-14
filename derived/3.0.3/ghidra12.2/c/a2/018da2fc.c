
undefined8 FUN_018da2fc(undefined8 *param_1,float *param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  uint local_28;
  uint local_24;
  
  lVar6 = *(long *)*param_1;
  if (*(int *)(param_3 + 8) < *(int *)(lVar6 + 0x20) ||
      *(int *)(lVar6 + 0x30) < *(int *)(param_3 + 8)) {
    return 0;
  }
  if (*(int *)(param_3 + 0xc) < *(int *)(lVar6 + 0x24)) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x34) < *(int *)(param_3 + 0xc)) {
    return 0;
  }
  lVar6 = param_1[1];
  lVar1 = param_1[2];
  *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  puVar4 = (undefined2 *)FUN_01a5190c(param_1[4],0,param_3,param_1[2]);
  puVar7 = (undefined2 *)param_1[3];
  *puVar7 = *puVar4;
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar4 + 1);
  *(undefined1 *)((long)puVar7 + 3) = *(undefined1 *)((long)puVar4 + 3);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar4 + 2);
  if (*(char *)param_1[5] == '\0') {
    if ((*(int *)(param_1[2] + 8) == *(int *)(param_1[1] + 8)) &&
       (*(int *)(param_1[2] + 0xc) == *(int *)(param_1[1] + 0xc))) {
      return 0;
    }
  }
  *(char *)param_1[5] = '\0';
  puVar3 = PTR_DAT_04bb4008;
  if ((param_4 & 1) != 0) {
    iVar9 = *(int *)(param_1[2] + 8);
    if ((((iVar9 <= *(int *)(param_5 + 0x20)) && (*(int *)(param_5 + 0x10) <= iVar9 + 1)) &&
        (iVar9 = *(int *)(param_1[2] + 0xc), iVar9 <= *(int *)(param_5 + 0x24))) &&
       (*(int *)(param_5 + 0x14) <= iVar9 + 1)) {
      return 0;
    }
  }
  psVar8 = (short *)param_1[3];
  uVar2 = *(undefined4 *)(param_1[6] + 0xc);
  uVar5 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,uVar2);
  if ((uVar5 & 1) != 0) {
    local_48 = *psVar8;
    if (local_48 == -2) {
      return 0;
    }
    local_46 = (undefined1)psVar8[1];
    local_45 = *(undefined1 *)((long)psVar8 + 3);
    local_44 = *(undefined4 *)(psVar8 + 2);
    local_24 = FUN_01241ca0(&local_48);
    if (local_24 == 0x13) {
      return 0;
    }
    local_28 = 0;
    uVar5 = FUN_01a12d50(*(undefined8 *)puVar3,&local_28,uVar2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((local_28 >> (ulong)(local_24 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  if ((*(undefined8 **)param_1[7] == (undefined8 *)0x0) ||
     (uVar5 = (*(code *)**(undefined8 **)param_1[7])
                        (param_1[8],param_1[3],param_1[2],param_1[6] + 0xc), (uVar5 & 1) != 0)) {
    iVar9 = *(int *)(param_1[2] + 8);
    iVar10 = *(int *)(param_1[2] + 0xc);
    param_2[1] = 0.0;
    param_2[2] = (float)iVar10 * 5.0 + 5.0;
    *param_2 = (float)iVar9 * 5.0 + 5.0;
    *(undefined4 *)param_1[9] = *(undefined4 *)param_1[8];
    return 1;
  }
  return 0;
}

