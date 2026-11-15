
void FUN_01f75118(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  FUN_01ec9370();
  if ((*(ushort *)(param_1 + 0xaf64) & 1) == 0) {
    return;
  }
  if (DAT_053e0208 == 0) {
    return;
  }
  lVar8 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar1 = *(undefined4 *)(*param_2 + 0x14);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x750);
  if (*(int *)(lVar8 + 0x1604) == 1) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      if ((iVar4 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
      {
        uVar3 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        puVar6 = (undefined1 *)(lVar8 + 0x10);
        if (uVar3 < 8) {
          puVar6 = puVar6 + (ulong)uVar3 * 0x1c;
        }
        goto LAB_01f75210;
      }
    }
    puVar6 = (undefined1 *)(lVar8 + 0x10);
  }
  else {
    puVar6 = (undefined1 *)(lVar8 + 0xd4);
  }
LAB_01f75210:
  *puVar6 = 1;
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(lVar7 + 0x278);
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(lVar7 + 0x27c);
  uVar9 = *(undefined4 *)(lVar7 + 0x280);
  *(undefined4 *)(puVar6 + 0x10) = uVar1;
  *(undefined4 *)(puVar6 + 0x14) = uVar2;
  *(undefined4 *)(puVar6 + 0xc) = uVar9;
  return;
}

