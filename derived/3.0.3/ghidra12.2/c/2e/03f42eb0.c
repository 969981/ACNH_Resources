
void FUN_03f42eb0(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  long lVar15;
  ulong unaff_x26;
  ulong local_a8;
  undefined1 local_98 [8];
  long *local_90;
  long *local_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  
  (**(code **)(*param_1 + 0x20))();
  if ((int)param_1[4] == 0) {
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    if ((int)param_1[0xd] == 0) {
      bVar4 = false;
      bVar3 = *(byte *)(param_1 + 1);
    }
    else {
      lVar7 = (long)(int)param_1[0xd] * 8;
      plVar6 = (long *)param_1[0xe];
      do {
        lVar7 = lVar7 + -8;
        bVar4 = *(char *)(*plVar6 + 0x104) < '\0';
        if (*(char *)(*plVar6 + 0x104) < '\0') break;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
      bVar3 = *(byte *)(param_1 + 1);
    }
    if ((bVar3 & 1) != 0) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    if (bVar4) goto LAB_03f42f5c;
LAB_03f431ac:
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb));
    lVar7 = 0;
  }
  else {
LAB_03f42f5c:
    if ((int)param_1[5] == 0) {
      lVar7 = 0;
      iVar2 = (int)param_1[4];
    }
    else {
      lVar15 = param_1[6];
      uVar13 = (ulong)((int)param_1[5] - 1);
      uVar14 = uVar13;
      do {
        if (*(char *)(lVar15 + (-(uVar14 >> 0x1f) & 0xffffffc000000000 | uVar14 << 6)) == '\0') {
          plVar6 = (long *)(lVar15 + (long)(int)uVar14 * 0x40 + 8);
          lVar7 = *plVar6;
          if (lVar7 != 0) {
            puVar5 = (undefined8 *)param_1[0xf];
            if (puVar5 == (undefined8 *)0x0) goto LAB_03f43088;
            uStack_78 = (ulong)*(uint *)((long)param_1 + 0x24);
            lVar8 = uVar13 << 0x20;
            unaff_x24 = unaff_x24 & 0xffffffff00000000 | uStack_78;
            lVar11 = (long)(int)uVar13 + 1;
            plVar9 = (long *)(lVar15 + -0x38 + (long)(int)uVar13 * 0x40);
            do {
              lVar11 = lVar11 + -1;
              if (lVar11 == 0) goto LAB_03f42f88;
              lVar12 = *plVar9;
              lVar8 = lVar8 + -0x100000000;
              plVar9 = plVar9 + -8;
            } while (lVar12 == 0);
            if (((int)lVar11 == 0) ||
               (local_80 = *(long *)(lVar15 + (lVar8 >> 0x1a) + 8), local_80 == 0)) {
LAB_03f42f88:
              local_80 = (long)(param_1 + 2) + (long)(int)-*(uint *)((long)param_1 + 0x24);
              uStack_78 = unaff_x26 & 0xffffffff00000000 | uStack_78;
              unaff_x26 = uStack_78;
            }
            else {
              uStack_78 = local_a8 & 0xffffffff00000000 | uStack_78;
              local_a8 = uStack_78;
            }
            local_98[0] = *(undefined1 *)(*plVar6 + 8);
            local_90 = &local_70;
            local_88 = &local_80;
            local_70 = lVar7;
            uStack_68 = unaff_x24;
            lVar7 = (**(code **)*puVar5)(puVar5,local_98);
            if (lVar7 != 0) goto LAB_03f43088;
          }
        }
        uVar13 = uVar14 + 0xffffffff;
        uVar14 = uVar13 & 0xffffffff;
      } while ((int)uVar13 != -1);
      lVar7 = 0;
LAB_03f43088:
      iVar2 = (int)param_1[4];
    }
    if (iVar2 == 0) {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      if ((int)param_1[0xd] == 0) {
        bVar4 = false;
        bVar3 = *(byte *)(param_1 + 1);
      }
      else {
        lVar15 = (long)(int)param_1[0xd] * 8;
        plVar6 = (long *)param_1[0xe];
        do {
          lVar15 = lVar15 + -8;
          bVar4 = *(char *)(*plVar6 + 0x104) < '\0';
          if (*(char *)(*plVar6 + 0x104) < '\0') break;
          plVar6 = plVar6 + 1;
        } while (lVar15 != 0);
        bVar3 = *(byte *)(param_1 + 1);
      }
      if ((bVar3 & 1) != 0) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      if (!bVar4) goto LAB_03f431ac;
    }
    if (lVar7 != 0) {
      uVar10 = *(uint *)(param_1 + 5) & 0xff;
      do {
        uVar10 = uVar10 - 1;
        if (uVar10 == 0xffffffff) goto LAB_03f43168;
        uVar1 = uVar10;
        if (*(uint *)(param_1 + 5) <= uVar10) {
          uVar1 = 0;
        }
        plVar6 = (long *)(param_1[6] + (ulong)uVar1 * 0x40 + 8);
      } while (*plVar6 != lVar7);
      plVar9 = *(long **)(*(int *)((long)param_1 + 0x24) + lVar7 + 8);
      lVar15 = (long)plVar9 - (long)*(int *)((long)param_1 + 0x24);
      if ((plVar9 == param_1 + 2 || lVar15 == 0) || (*(char *)(lVar7 + 8) != *(char *)(lVar15 + 8)))
      {
        lVar15 = 0;
      }
      *plVar6 = lVar15;
LAB_03f43168:
      plVar6 = (long *)(lVar7 + *(int *)((long)param_1 + 0x24));
      if (*plVar6 != 0) {
        *(long *)(*plVar6 + 8) = plVar6[1];
      }
      if ((long *)plVar6[1] != (long *)0x0) {
        *(long *)plVar6[1] = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      *(undefined4 *)(lVar7 + 0x40) = 3;
    }
  }
  *param_2 = lVar7;
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

