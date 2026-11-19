
void FUN_03bbb01c(long *param_1,long *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  char *__dest;
  ulong uVar8;
  float fVar9;
  undefined **local_e0;
  undefined **local_d0;
  undefined8 *puStack_c8;
  undefined4 local_bc;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  lVar7 = *(long *)(*param_1 + 8);
  __dest = *(char **)(lVar7 + 0x30);
  if (__dest != "UnitDistanceCurve") {
    iVar2 = 0x11;
    if (*(int *)(lVar7 + 0x38) < 0x12) {
      iVar2 = *(int *)(lVar7 + 0x38) + -1;
    }
    memcpy(__dest,"UnitDistanceCurve",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  puVar3 = PTR_DAT_04bb2020;
  uVar8 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_e0 = &PTR_LAB_048fb9f8;
  do {
    local_bc = (undefined4)uVar8;
    puStack_c8 = (undefined8 *)(&PTR_s_CurveType_04b7aa08)[uVar8];
    switch(uVar8 & 0xffffffff) {
    case 0:
      puVar6 = &DAT_0407ebb1;
      if (*(uint *)(param_2 + 0xc) < 2) {
        puVar6 = (undefined8 *)(&PTR_DAT_04b7a710)[*(uint *)(param_2 + 0xc)];
      }
      local_d0 = (undefined **)(puVar3 + 0x10);
      pppuVar4 = &local_b8;
      pppuVar5 = &local_d0;
      local_b8 = ppuVar1;
      local_b0 = puStack_c8;
      goto LAB_03bbb120;
    case 1:
      fVar9 = *(float *)((long)param_2 + 100);
      local_d0 = (undefined **)(puVar3 + 0x10);
      local_b8 = local_e0;
      goto LAB_03bbb104;
    case 2:
      fVar9 = *(float *)(param_2 + 0xd);
      break;
    case 3:
      fVar9 = *(float *)((long)param_2 + 0x6c);
      break;
    case 4:
      fVar9 = *(float *)(param_2 + 0xe);
      break;
    case 5:
      fVar9 = *(float *)((long)param_2 + 0x74);
      break;
    case 6:
      local_d0 = (undefined **)(puVar3 + 0x10);
      fVar9 = (float)(**(code **)(*param_2 + 0x30))(param_2);
      goto LAB_03bbb0e8;
    default:
      goto switchD_03bbb15c_default;
    }
    local_d0 = (undefined **)(puVar3 + 0x10);
LAB_03bbb0e8:
    local_b8 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
LAB_03bbb104:
    local_65 = 0;
    local_a4[0] = 0;
    local_a8 = 0x40;
    local_b0 = (undefined8 *)local_a4;
    FUN_038d1270((double)fVar9,&local_b8,&DAT_0405fb44);
    pppuVar4 = &local_d0;
    pppuVar5 = &local_b8;
    puVar6 = puStack_c8;
LAB_03bbb120:
    puStack_c8 = puVar6;
    FUN_038f3be0(lVar7,pppuVar4,pppuVar5,param_3);
switchD_03bbb15c_default:
    uVar8 = uVar8 + 1;
    if (uVar8 == 7) {
      return;
    }
  } while( true );
}

