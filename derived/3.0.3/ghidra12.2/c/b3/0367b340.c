
void FUN_0367b340(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar10 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = param_2;
  }
  uVar5 = FUN_0367a534(*(undefined8 *)(param_1 + 0xa0),param_2);
  if ((uVar5 & 1) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x1f8);
    if (puVar8 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar8;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x1e8);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(lVar4 + 0x10);
    }
    iVar3 = FUN_03f4cb50(*(long *)(param_1 + 0xa0) + 0x40,uVar6,uVar7);
    if ((iVar3 == 0) &&
       (uVar5 = FUN_0367ac58(*(undefined8 *)(param_1 + 0xa0),param_2), (uVar5 & 1) != 0)) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x20);
      FUN_0367cb60(param_1,*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),param_2);
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20);
      if (lVar4 != 0) {
        uVar9 = *(uint *)(param_1 + 0x98);
        if (399 < (int)uVar9) {
          uVar9 = 400;
        }
        *(uint *)(lVar4 + 0xc) = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      }
      bVar1 = true;
      goto joined_r0x0367b43c;
    }
  }
  bVar1 = false;
  *(undefined1 *)(param_1 + 0x58) = 1;
joined_r0x0367b43c:
  if (lVar10 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar10;
  }
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}

