
void FUN_03681a50(int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  size_t __size;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  *param_1 = *param_2;
  lVar10 = DAT_05ae7600;
  fVar12 = 144.0 / (float)*param_2;
  fVar11 = 128.0 / (float)*param_2;
  uVar8 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar8 = (uint)(0.0 <= fVar12);
  }
  iVar1 = uVar8 + (int)fVar12;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(0.0 <= fVar11);
  }
  iVar2 = uVar8 + (int)fVar11;
  if (iVar1 < 1 || iVar2 < 1) {
    return;
  }
  iVar3 = iVar2 * iVar1;
  __size = (long)iVar3 * 0x23c;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)iVar3;
  if (SUB168(auVar4 * ZEXT816(0x23c),8) != 0) {
    __size = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(__size);
    if (puVar7 == (undefined8 *)0x0) goto LAB_03681b58;
LAB_03681b70:
    puVar9 = puVar7;
    do {
      *(undefined4 *)(puVar9 + 6) = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x26) = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      lVar10 = 0;
      do {
        lVar5 = lVar10 + 0x10;
        *(undefined8 *)((long)puVar9 + lVar10 + 0x34) = 0xfffe0000fffe;
        *(undefined8 *)((long)puVar9 + lVar10 + 0x3c) = 0xfffe0000fffe;
        lVar10 = lVar5;
      } while (lVar5 != 0x200);
      *(undefined4 *)((long)puVar9 + 0x234) = 0;
      *(undefined2 *)(puVar9 + 0x47) = 3;
      puVar9 = (undefined8 *)((long)puVar9 + 0x23c);
    } while (puVar9 != (undefined8 *)((long)puVar7 + (long)iVar3 * 0x23c));
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    *(undefined8 **)(param_1 + 4) = puVar7;
    if (DAT_05ae7600 != 0) goto LAB_03681bdc;
LAB_03681c38:
    puVar7 = malloc(__size);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_03681b40;
      if (DAT_05ae7600 == 0) goto LAB_03681c38;
LAB_03681bec:
      lVar10 = DAT_05ae7600;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar7 = (undefined8 *)(lVar10 + 8);
      if (lVar5 != 0) {
        puVar7 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar7;
      if (param_3 == (long *)0x0) {
        return;
      }
    }
    else {
LAB_03681b40:
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
      if (puVar7 != (undefined8 *)0x0) goto LAB_03681b70;
LAB_03681b58:
      if (DAT_05ae7600 == 0) goto LAB_03681c38;
LAB_03681bdc:
      if (param_3 == (long *)0x0) goto LAB_03681bec;
    }
    puVar7 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar7;
    do {
      *(undefined4 *)(puVar9 + 6) = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x26) = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      lVar10 = 0;
      do {
        lVar5 = lVar10 + 0x10;
        *(undefined8 *)((long)puVar9 + lVar10 + 0x34) = 0xfffe0000fffe;
        *(undefined8 *)((long)puVar9 + lVar10 + 0x3c) = 0xfffe0000fffe;
        lVar10 = lVar5;
      } while (lVar5 != 0x200);
      *(undefined4 *)((long)puVar9 + 0x234) = 0;
      *(undefined2 *)(puVar9 + 0x47) = 3;
      puVar9 = (undefined8 *)((long)puVar9 + 0x23c);
    } while (puVar9 != (undefined8 *)((long)puVar7 + (long)iVar3 * 0x23c));
    param_1[6] = iVar1;
    param_1[7] = iVar2;
    *(undefined8 **)(param_1 + 8) = puVar7;
  }
  return;
}

