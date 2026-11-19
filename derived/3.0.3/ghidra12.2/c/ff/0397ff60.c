
void FUN_0397ff60(long *param_1,long param_2,uint param_3,uint param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  void *pvVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong __size;
  ulong *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 200))(param_1,param_5);
  lVar3 = DAT_05ae7600;
  if (0 < (int)param_3) {
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc((ulong)param_3 * 0x70);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar3 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0398006c;
      }
      puVar7 = (undefined1 *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_3 * 0x70,8);
    }
    if (puVar7 != (undefined1 *)0x0) {
      puVar13 = puVar7;
      do {
        *puVar13 = 0;
        *(undefined4 *)(puVar13 + 4) = 0;
        *(undefined4 *)(puVar13 + 0x60) = 0;
        *(undefined8 *)(puVar13 + 0x68) = 0;
        *(undefined8 *)(puVar13 + 0x28) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0x3f80000000000000;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x40) = 0x3f80000000000000;
        puVar13 = puVar13 + 0x70;
      } while (puVar13 != puVar7 + (ulong)param_3 * 0x70);
      *(uint *)(param_1 + 2) = param_3;
      param_1[3] = (long)puVar7;
    }
  }
LAB_0398006c:
  lVar3 = DAT_05ae7600;
  if (0 < (int)param_4) {
    if (DAT_05ae7600 == 0) {
      pvVar8 = malloc((ulong)param_4 << 2);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar3 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_039800e8;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_4 << 2,8);
    }
    if (pvVar8 != (void *)0x0) {
      param_1[6] = (long)pvVar8;
      *(uint *)(param_1 + 5) = param_4;
    }
  }
LAB_039800e8:
  lVar3 = param_1[2];
  if ((int)lVar3 != 0) {
    lVar5 = 0;
    uVar14 = (ulong)param_4 * 0xd0 - 0xd0;
    iVar19 = 0;
    lVar15 = param_1[3];
    __size = (ulong)param_4 * 0xd0 | 8;
    do {
      lVar16 = DAT_05ae7600;
      lVar18 = lVar15 + (long)iVar19 * 0x70;
      puVar1 = (uint *)(lVar18 + 0x60);
      if (0 < (int)param_4) {
        if (DAT_05ae7600 == 0) {
          puVar10 = malloc(__size);
        }
        else {
          plVar6 = param_5;
          if (param_5 == (long *)0x0) {
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar16 + 8);
            if (lVar9 != 0) {
              plVar6 = (long *)(lVar9 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_039802dc;
          }
          puVar10 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
        }
        if (puVar10 != (ulong *)0x0) {
          puVar11 = puVar10 + 1;
          *puVar10 = (ulong)param_4;
          puVar12 = puVar11;
          if ((uVar14 / 0xd0 & 1) == 0) {
            *(undefined4 *)(puVar10 + 1) = 0;
            puVar10[0x12] = 0;
            *(undefined4 *)(puVar10 + 0x13) = 0x10001;
            *(undefined1 *)((long)puVar10 + 0x9c) = 0;
            puVar10[0x1a] = 0;
            puVar10[0xe] = 0;
            puVar10[0xf] = 0;
            puVar10[0x10] = 0;
            puVar10[0x11] = 0;
            puVar10[0xc] = (ulong)&PTR_LAB_04b65ee0;
            puVar10[0xd] = 0;
            puVar12 = puVar10 + 0x1b;
          }
          puVar4 = PTR_DAT_04bd11b8;
          if (0xcf < uVar14) {
            do {
              *(undefined4 *)puVar12 = 0;
              puVar12[0x11] = 0;
              *(undefined4 *)(puVar12 + 0x12) = 0x10001;
              *(undefined1 *)((long)puVar12 + 0x94) = 0;
              puVar12[0x19] = 0;
              *(undefined4 *)(puVar12 + 0x1a) = 0;
              puVar12[0x2b] = 0;
              *(undefined4 *)(puVar12 + 0x2c) = 0x10001;
              *(undefined1 *)((long)puVar12 + 0x164) = 0;
              puVar12[0x33] = 0;
              puVar12[0xb] = (ulong)(puVar4 + 0x10);
              puVar12[0xc] = 0;
              puVar12[0xd] = 0;
              puVar12[0xe] = 0;
              puVar12[0xf] = 0;
              puVar12[0x10] = 0;
              puVar12[0x25] = (ulong)(puVar4 + 0x10);
              puVar12[0x26] = 0;
              puVar12[0x27] = 0;
              puVar12[0x28] = 0;
              puVar12[0x29] = 0;
              puVar12[0x2a] = 0;
              puVar12 = puVar12 + 0x34;
            } while (puVar12 != puVar11 + (ulong)param_4 * 0x1a);
          }
          *puVar1 = param_4;
          *(ulong **)(lVar15 + (long)iVar19 * 0x70 + 0x68) = puVar11;
        }
      }
LAB_039802dc:
      (**(code **)(*param_1 + 0xa8))(param_1,iVar19,1);
      (**(code **)(*param_1 + 0xd0))(param_1,lVar18,param_5);
      uVar2 = *puVar1;
      if (uVar2 != 0) {
        uVar17 = 0;
        lVar16 = *(long *)(lVar15 + (long)iVar19 * 0x70 + 0x68);
        do {
          lVar18 = lVar16 + (long)(int)uVar17 * 0xd0 + 0x58;
          if (lVar5 == 0) {
            (**(code **)(*param_1 + 0xd8))(param_1,lVar18,param_5);
            lVar5 = lVar18;
          }
          else {
            lVar9 = lVar16 + (long)(int)uVar17 * 0xd0;
            *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(lVar5 + 8);
            *(undefined4 *)(lVar9 + 0x88) = *(undefined4 *)(lVar5 + 0x30);
            *(byte *)(lVar9 + 0x94) = *(byte *)(lVar9 + 0x94) & 0xfe;
          }
          FUN_0390d990(lVar18,param_5,2,1);
          uVar17 = uVar17 + 1;
        } while (uVar2 != uVar17);
      }
      iVar19 = iVar19 + 1;
    } while ((int)lVar3 != iVar19);
  }
  return;
}

