
void FUN_0147a234(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar4 = *(long *)(param_1 + 0x68);
  fVar5 = 0.0;
  iVar1 = *(int *)(lVar4 + 0x2b4);
  if (*(long *)(param_1 + 0x70) == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    if (*(int *)(*(long *)(param_1 + 0x70) + 0x280) - 5U < 2) {
      fVar5 = *(float *)(param_1 + 0x8c0) - *(float *)(lVar4 + 0x278);
      fVar6 = *(float *)(param_1 + 0x8c8) - *(float *)(lVar4 + 0x280);
    }
  }
  iVar2 = FUN_006f0400(fVar5,fVar6);
  switch((iVar2 - iVar1) + 0x20000000U >> 0x1e) {
  case 0:
    plVar3 = *(long **)(param_1 + 0xa80);
    puStack_28 = PTR_DAT_04bbcb98 + 0xb5;
    break;
  case 1:
    plVar3 = *(long **)(param_1 + 0xa80);
    puStack_28 = PTR_DAT_04bbcb98 + 0xa5;
    break;
  case 2:
    plVar3 = *(long **)(param_1 + 0xa80);
    puStack_28 = PTR_DAT_04bbcb98 + 0xad;
    break;
  case 3:
    plVar3 = *(long **)(param_1 + 0xa80);
    puStack_28 = PTR_DAT_04bbcb98 + 0x9d;
    break;
  default:
    goto switchD_0147a2c4_default;
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  if (plVar3[0x227] != 0) {
    FUN_038501b0(0,plVar3[0x227],2);
    lVar4 = plVar3[0x227];
    if (*(char *)(lVar4 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar4 + 0x2c0) = 0;
      FUN_03855b20(lVar4 + 0xc0,0);
    }
    FUN_0384f8c0(lVar4,&local_30,2,0);
    (**(code **)(*plVar3 + 0x120))(plVar3,&local_30,0,2);
  }
switchD_0147a2c4_default:
  return;
}

