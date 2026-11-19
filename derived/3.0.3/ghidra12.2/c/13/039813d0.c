
void FUN_039813d0(long *param_1,long param_2,uint param_3,uint param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  void *pvVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 200))(param_1,param_5);
  lVar3 = DAT_05ae7600;
  if (0 < (int)param_3) {
    uVar15 = (ulong)param_3 * 0x360 | 8;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(uVar15);
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
        if (plVar6 == (long *)0x0) goto LAB_03981578;
      }
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar15,8);
    }
    if (puVar7 != (ulong *)0x0) {
      puVar11 = puVar7 + 1;
      *puVar7 = (ulong)param_3;
      puVar7 = puVar11;
      do {
        *(undefined1 *)puVar7 = 0;
        *(undefined4 *)((long)puVar7 + 4) = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x3c) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar7 + 0x44) = 0;
        *(undefined8 *)((long)puVar7 + 0x4c) = 0x3f80000000000000;
        FUN_0390cee0(puVar7 + 0x13);
        *(undefined4 *)(puVar7 + 0x32) = 0;
        puVar7[0x33] = 0;
        puVar7[0x39] = 0xff7fffffff7fffff;
        puVar7[0x40] = 0;
        puVar7[0x41] = 0;
        puVar7[0x42] = 0;
        puVar7[0x43] = 0;
        puVar7[0x44] = 0;
        puVar7[0x45] = 0;
        *(undefined4 *)(puVar7 + 0x46) = 0xffffffff;
        puVar7[0x4d] = 0;
        puVar7[0x4c] = 0;
        puVar7[0x4b] = 0;
        puVar7[0x4a] = 0;
        puVar7[0x49] = 0;
        puVar7[0x48] = 0;
        puVar7[0x47] = 0;
        puVar7[0x4e] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar7 + 0x4f) = 0x10000;
        puVar7[0x37] = 0x7f7fffff7f7fffff;
        puVar7[0x38] = 0xff7fffff7f7fffff;
        puVar7[0x3c] = 0;
        puVar7[0x3d] = 0;
        puVar7[0x3e] = 0;
        puVar7[0x3f] = 0;
        FUN_0390cee0(puVar7 + 0x50);
        puVar7 = puVar7 + 0x6c;
      } while (puVar7 != puVar11 + (ulong)param_3 * 0x6c);
      *(uint *)(param_1 + 2) = param_3;
      param_1[3] = (long)puVar11;
    }
  }
LAB_03981578:
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
        if (plVar6 == (long *)0x0) goto LAB_039815f4;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_4 << 2,8);
    }
    if (pvVar8 != (void *)0x0) {
      param_1[6] = (long)pvVar8;
      *(uint *)(param_1 + 5) = param_4;
    }
  }
LAB_039815f4:
  lVar3 = param_1[2];
  if ((int)lVar3 != 0) {
    lVar5 = 0;
    uVar12 = (ulong)param_4 * 0xd0 - 0xd0;
    iVar18 = 0;
    lVar13 = param_1[3];
    uVar15 = (ulong)param_4 * 0xd0 | 8;
    do {
      lVar14 = DAT_05ae7600;
      lVar17 = lVar13 + (long)iVar18 * 0x360;
      puVar1 = (uint *)(lVar17 + 400);
      if (0 < (int)param_4) {
        if (DAT_05ae7600 == 0) {
          puVar7 = malloc(uVar15);
        }
        else {
          plVar6 = param_5;
          if (param_5 == (long *)0x0) {
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar6 = (long *)(lVar14 + 8);
            if (lVar9 != 0) {
              plVar6 = (long *)(lVar9 + 0xa8);
            }
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_039817ec;
          }
          puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar15,8);
        }
        if (puVar7 != (ulong *)0x0) {
          puVar10 = puVar7 + 1;
          *puVar7 = (ulong)param_4;
          puVar11 = puVar10;
          if ((uVar12 / 0xd0 & 1) == 0) {
            *(undefined4 *)(puVar7 + 1) = 0;
            puVar7[0x12] = 0;
            *(undefined4 *)(puVar7 + 0x13) = 0x10001;
            *(undefined1 *)((long)puVar7 + 0x9c) = 0;
            puVar7[0x1a] = 0;
            puVar7[0xe] = 0;
            puVar7[0xf] = 0;
            puVar7[0x10] = 0;
            puVar7[0x11] = 0;
            puVar7[0xc] = (ulong)&PTR_LAB_04b65ee0;
            puVar7[0xd] = 0;
            puVar11 = puVar7 + 0x1b;
          }
          puVar4 = PTR_DAT_04bd11b8;
          if (0xcf < uVar12) {
            do {
              *(undefined4 *)puVar11 = 0;
              puVar11[0x11] = 0;
              *(undefined4 *)(puVar11 + 0x12) = 0x10001;
              *(undefined1 *)((long)puVar11 + 0x94) = 0;
              puVar11[0x19] = 0;
              *(undefined4 *)(puVar11 + 0x1a) = 0;
              puVar11[0x2b] = 0;
              *(undefined4 *)(puVar11 + 0x2c) = 0x10001;
              *(undefined1 *)((long)puVar11 + 0x164) = 0;
              puVar11[0x33] = 0;
              puVar11[0xb] = (ulong)(puVar4 + 0x10);
              puVar11[0xc] = 0;
              puVar11[0xd] = 0;
              puVar11[0xe] = 0;
              puVar11[0xf] = 0;
              puVar11[0x10] = 0;
              puVar11[0x25] = (ulong)(puVar4 + 0x10);
              puVar11[0x26] = 0;
              puVar11[0x27] = 0;
              puVar11[0x28] = 0;
              puVar11[0x29] = 0;
              puVar11[0x2a] = 0;
              puVar11 = puVar11 + 0x34;
            } while (puVar11 != puVar10 + (ulong)param_4 * 0x1a);
          }
          *puVar1 = param_4;
          *(ulong **)(lVar13 + (long)iVar18 * 0x360 + 0x198) = puVar10;
        }
      }
LAB_039817ec:
      (**(code **)(*param_1 + 0xa8))(param_1,iVar18,1);
      (**(code **)(*param_1 + 0xd0))(param_1,lVar17,param_5);
      uVar2 = *puVar1;
      if (uVar2 != 0) {
        uVar16 = 0;
        lVar14 = *(long *)(lVar13 + (long)iVar18 * 0x360 + 0x198);
        do {
          lVar17 = lVar14 + (long)(int)uVar16 * 0xd0 + 0x58;
          if (lVar5 == 0) {
            (**(code **)(*param_1 + 0xd8))(param_1,lVar17,param_5);
            lVar5 = lVar17;
          }
          else {
            lVar9 = lVar14 + (long)(int)uVar16 * 0xd0;
            *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(lVar5 + 8);
            *(undefined4 *)(lVar9 + 0x88) = *(undefined4 *)(lVar5 + 0x30);
            *(byte *)(lVar9 + 0x94) = *(byte *)(lVar9 + 0x94) & 0xfe;
          }
          FUN_0390d990(lVar17,param_5,2,1);
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
      }
      iVar18 = iVar18 + 1;
    } while ((int)lVar3 != iVar18);
  }
  return;
}

