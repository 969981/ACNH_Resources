
void FUN_03838390(byte *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    goto switchD_038383c4_caseD_0;
  case 1:
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) {
      return;
    }
    break;
  case 5:
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1a8))();
  case 3:
  case 4:
    param_1[4] = 6;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    lVar5 = *(long *)(param_1 + 8);
    *param_1 = *param_1 & 0xfd;
    puVar1 = PTR_DAT_04bb3350;
    if (lVar5 == 0) {
      lVar4 = 1;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar4 = *(long *)(lVar3 + 0xa8);
      *(long *)(lVar3 + 0xa8) = lVar5;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2);
      *(undefined1 *)plVar2[0x1e] = 0;
      *(undefined1 *)plVar2[0xb] = 0;
      FUN_03835c70(plVar2);
      *(byte *)(plVar2 + 9) = *(byte *)(plVar2 + 9) | 1;
    }
    if (lVar4 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar4;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x20))();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    param_1[1] = 0;
  case 6:
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  case 2:
    plVar2 = *(long **)(param_1 + 0x10);
    break;
  default:
    return;
  }
  (**(code **)(*plVar2 + 0x160))();
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    lVar4 = 1;
    plVar2 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar4 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar5;
    plVar2 = *(long **)(param_1 + 0x10);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xb0))();
  }
  if (lVar4 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar4;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
switchD_038383c4_caseD_0:
  *param_1 = *param_1 | 1;
  return;
}

