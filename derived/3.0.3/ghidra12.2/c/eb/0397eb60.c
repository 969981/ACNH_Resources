
void FUN_0397eb60(long *param_1,long param_2,uint param_3,uint param_4,long *param_5)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined2 *puVar7;
  void *pvVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong __size;
  ulong *puVar12;
  ulong *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 200))(param_1,param_5);
  lVar4 = DAT_05ae7600;
  if (0 < (int)param_3) {
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc((ulong)param_3 * 0x58);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar4 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0397ec6c;
      }
      puVar7 = (undefined2 *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_3 * 0x58,8);
    }
    if (puVar7 != (undefined2 *)0x0) {
      puVar14 = puVar7;
      do {
        *puVar14 = 0;
        *(undefined4 *)(puVar14 + 2) = 0;
        *(undefined4 *)(puVar14 + 0x24) = 0;
        *(undefined8 *)(puVar14 + 0x28) = 0;
        *(undefined8 *)(puVar14 + 0x10) = 0;
        *(undefined8 *)(puVar14 + 0x14) = 0x3f80000000000000;
        *(undefined8 *)(puVar14 + 0x18) = 0;
        *(undefined8 *)(puVar14 + 0x1c) = 0x3f80000000000000;
        puVar14 = puVar14 + 0x2c;
      } while (puVar14 != puVar7 + (ulong)param_3 * 0x2c);
      *(uint *)(param_1 + 2) = param_3;
      param_1[3] = (long)puVar7;
    }
  }
LAB_0397ec6c:
  lVar4 = DAT_05ae7600;
  if (0 < (int)param_4) {
    if (DAT_05ae7600 == 0) {
      pvVar8 = malloc((ulong)param_4 << 2);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar4 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0397ece8;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_4 << 2,8);
    }
    if (pvVar8 != (void *)0x0) {
      param_1[6] = (long)pvVar8;
      *(uint *)(param_1 + 5) = param_4;
    }
  }
LAB_0397ece8:
  lVar4 = param_1[2];
  if ((int)lVar4 != 0) {
    lVar11 = param_1[3];
    lVar5 = 0;
    iVar19 = 0;
    puVar1 = PTR_DAT_04bd11b8 + 0x10;
    uVar15 = (ulong)param_4;
    __size = uVar15 << 7 | 8;
    do {
      lVar18 = DAT_05ae7600;
      lVar17 = lVar11 + (long)iVar19 * 0x58;
      puVar2 = (uint *)(lVar17 + 0x48);
      if (0 < (int)param_4) {
        if (DAT_05ae7600 == 0) {
          puVar10 = malloc(__size);
        }
        else {
          plVar6 = param_5;
          if (param_5 == (long *)0x0) {
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar18 + 8);
            if (lVar9 != 0) {
              plVar6 = (long *)(lVar9 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_0397eea8;
          }
          puVar10 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
        }
        if (puVar10 != (ulong *)0x0) {
          puVar12 = puVar10 + 1;
          *puVar10 = uVar15;
          puVar13 = puVar12;
          if ((param_4 & 1) != 0) {
            *(undefined4 *)(puVar10 + 1) = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            *(undefined4 *)(puVar10 + 9) = 0x10001;
            *(undefined1 *)((long)puVar10 + 0x4c) = 0;
            puVar10[0x10] = 0;
            puVar10[2] = (ulong)&PTR_LAB_04b65ee0;
            puVar10[3] = 0;
            puVar13 = puVar10 + 0x11;
          }
          if ((uVar15 - 1 & 0x1ffffffffffffff) != 0) {
            do {
              *(undefined4 *)puVar13 = 0;
              puVar13[7] = 0;
              *(undefined4 *)(puVar13 + 8) = 0x10001;
              *(undefined1 *)((long)puVar13 + 0x44) = 0;
              puVar13[0xf] = 0;
              *(undefined4 *)(puVar13 + 0x10) = 0;
              puVar13[0x17] = 0;
              *(undefined4 *)(puVar13 + 0x18) = 0x10001;
              *(undefined1 *)((long)puVar13 + 0xc4) = 0;
              puVar13[0x1f] = 0;
              puVar13[1] = (ulong)puVar1;
              puVar13[2] = 0;
              puVar13[3] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
              puVar13[6] = 0;
              puVar13[0x11] = (ulong)puVar1;
              puVar13[0x12] = 0;
              puVar13[0x13] = 0;
              puVar13[0x14] = 0;
              puVar13[0x15] = 0;
              puVar13[0x16] = 0;
              puVar13 = puVar13 + 0x20;
            } while (puVar13 != puVar12 + uVar15 * 0x10);
          }
          *puVar2 = param_4;
          *(ulong **)(lVar11 + (long)iVar19 * 0x58 + 0x50) = puVar12;
        }
      }
LAB_0397eea8:
      (**(code **)(*param_1 + 0xa8))(param_1,iVar19,1);
      (**(code **)(*param_1 + 0xd0))(param_1,lVar17,param_5);
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        uVar16 = 0;
        lVar18 = *(long *)(lVar11 + (long)iVar19 * 0x58 + 0x50);
        do {
          lVar17 = lVar18 + ((long)((ulong)uVar16 << 0x20) >> 0x19) + 8;
          if (lVar5 == 0) {
            (**(code **)(*param_1 + 0xd8))(param_1,lVar17,param_5);
            lVar5 = lVar17;
          }
          else {
            lVar9 = lVar18 + (long)(int)uVar16 * 0x80;
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar5 + 8);
            *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar5 + 0x30);
            *(byte *)(lVar9 + 0x44) = *(byte *)(lVar9 + 0x44) & 0xfe;
          }
          FUN_0390d990(lVar17,param_5,2,1);
          uVar16 = uVar16 + 1;
        } while (uVar3 != uVar16);
      }
      iVar19 = iVar19 + 1;
    } while ((int)lVar4 != iVar19);
  }
  return;
}

