
void FUN_03bb8968(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  float fVar11;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  lVar8 = *(long *)(*param_1 + 8);
  pcVar9 = *(char **)(lVar8 + 0x30);
  if (pcVar9 != "RollOffCurve") {
    iVar2 = 0xc;
    if (*(int *)(lVar8 + 0x38) < 0xd) {
      iVar2 = *(int *)(lVar8 + 0x38) + -1;
    }
    memcpy(pcVar9,"RollOffCurve",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  puVar4 = PTR_DAT_04bb2bc0;
  puVar3 = PTR_DAT_04bb2020;
  uVar10 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    local_bc = (undefined4)uVar10;
    puStack_c8 = (undefined8 *)(&PTR_s_RollOffModel_04b7a828)[uVar10];
    switch(uVar10 & 0xffffffff) {
    case 0:
      puVar7 = &DAT_0407ebb1;
      if (*(uint *)((long)param_2 + 0x84) < 4) {
        puVar7 = *(undefined8 **)
                  (PTR_DAT_04bd2100 + (ulong)*(uint *)((long)param_2 + 0x84) * 8 + 0x18);
      }
      local_d0 = puVar3 + 0x10;
      ppuVar5 = &local_b8;
      ppuVar6 = &local_d0;
      local_b8 = puVar1;
      local_b0 = puStack_c8;
      goto LAB_03bb8a5c;
    case 1:
      fVar11 = *(float *)(param_2 + 0xd);
      local_d0 = puVar3 + 0x10;
      goto LAB_03bb8a34;
    case 2:
      fVar11 = *(float *)((long)param_2 + 0x6c);
      break;
    case 3:
      fVar11 = *(float *)(param_2 + 0xe);
      break;
    case 4:
      fVar11 = *(float *)((long)param_2 + 0x74);
      break;
    case 5:
      local_d0 = puVar3 + 0x10;
      local_b8 = puVar4 + 0x10;
      local_a8 = 0x40;
      local_65 = 0;
      local_a4[0] = 0;
      pcVar9 = "false";
      if ((char)param_2[0xf] != '\0') {
        pcVar9 = "true";
      }
      local_b0 = (undefined8 *)local_a4;
      FUN_038d1270(&local_b8,&DAT_0409e973,pcVar9);
      goto LAB_03bb8a54;
    case 6:
      local_d0 = puVar3 + 0x10;
      fVar11 = (float)(**(code **)(*param_2 + 0x30))(param_2);
      goto LAB_03bb8a34;
    default:
      goto switchD_03bb8a98_default;
    }
    local_d0 = puVar3 + 0x10;
LAB_03bb8a34:
    local_b8 = puVar4 + 0x10;
    local_a8 = 0x40;
    local_65 = 0;
    local_a4[0] = 0;
    local_b0 = (undefined8 *)local_a4;
    FUN_038d1270((double)fVar11,&local_b8,&DAT_0405fb44);
LAB_03bb8a54:
    ppuVar5 = &local_d0;
    ppuVar6 = &local_b8;
    puVar7 = puStack_c8;
LAB_03bb8a5c:
    puStack_c8 = puVar7;
    FUN_038f3be0(lVar8,ppuVar5,ppuVar6,param_3);
switchD_03bb8a98_default:
    uVar10 = uVar10 + 1;
    if (uVar10 == 7) {
      return;
    }
  } while( true );
}

