
/* WARNING: Removing unreachable block (ram,0x03296460) */
/* WARNING: Removing unreachable block (ram,0x03296438) */
/* WARNING: Removing unreachable block (ram,0x032964ac) */

void FUN_03296400(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  ulong local_38;
  
  plVar10 = *(long **)(param_1 + 0x918);
  if (plVar10 == (long *)0x0) {
    local_38 = local_38 & 0xffffffff00000000;
    puVar12 = *(undefined8 **)(param_1 + 0xb8);
    plVar10 = (long *)*puVar12;
    puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x30,8);
    local_38 = local_38 & 0xffffffff00000000;
    uVar7 = *puVar12;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    FUN_03291da0(puVar5,uVar7,0);
    local_38 = *(ulong *)(param_1 + 0x918);
    *(undefined8 **)(param_1 + 0x918) = puVar5;
    FUN_03281ac0(&local_38);
    local_38 = local_38 & 0xffffffff00000000;
    lVar13 = *(long *)(*(long *)(param_1 + 0x918) + 0x18);
    plVar10 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                                ((long *)**(undefined8 **)(param_1 + 0xb8),0x18,8);
    *plVar10 = (long)(PTR_DAT_04bc9050 + 0x10);
    plVar10[1] = lVar13;
    plVar10[2] = 0x10000000000;
    plVar6 = *(long **)(param_1 + 0x920);
    *(long **)(param_1 + 0x920) = plVar10;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    *(undefined1 *)((long)plVar10 + 0x14) = 0;
    *(undefined4 *)(plVar10 + 2) = 2;
    *(undefined1 *)((long)plVar10 + 0x16) = 1;
    plVar10 = *(long **)(param_1 + 0x918);
  }
  lVar13 = plVar10[3];
  *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(param_1 + 0x920);
  local_38._0_4_ = 1;
  *(byte *)(lVar13 + 0x170) = *(byte *)(lVar13 + 0x170) | 2;
  FUN_032923e0(plVar10,param_1 + 0x300);
  lVar13 = DAT_0572ba48;
  if (*plVar10 == 0) {
    puVar12 = (undefined8 *)(DAT_0572ba48 + 8);
    puVar5 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar10;
    }
    else {
      do {
        puVar12 = puVar5;
        puVar5 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar10;
      plVar10[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar10 = (long)puVar12;
    FUN_0328fad0(lVar13);
    local_38._0_4_ = 0;
    if ((*(uint *)((long)plVar10 + 0x2c) & 1) == 0) {
      *(undefined8 *)(lVar13 + 0xa8) = 0;
      local_38._0_4_ = 1;
      *(byte *)(lVar13 + 0xd4) = *(byte *)(lVar13 + 0xd4) & 0xfd;
    }
  }
  lVar13 = *(long *)(param_1 + 0x248);
  puVar3 = (undefined1 *)0x0;
  if (lVar13 != 0) {
    puVar3 = &LAB_032990fc;
  }
  if ((puVar3 != (undefined1 *)0x0) && (*(int *)(lVar13 + 0x10) != 0)) {
    plVar6 = *(long **)(lVar13 + 0x18);
    plVar1 = plVar6 + *(int *)(lVar13 + 0x10);
    do {
      lVar13 = *(long *)(*plVar6 + 0x428);
      if ((lVar13 != 0) && (plVar8 = (long *)(lVar13 + 8), *plVar8 == 0)) {
        plVar9 = (long *)(plVar10[3] + 0x58);
        puVar5 = (undefined8 *)*plVar9;
        if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
          *plVar9 = (long)plVar8;
        }
        else {
          do {
            puVar12 = puVar5;
            puVar5 = (undefined8 *)puVar12[2];
          } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
          puVar12[2] = plVar8;
          *(undefined8 **)(lVar13 + 0x10) = puVar12;
          plVar9 = (long *)*puVar12;
        }
        *plVar8 = (long)plVar9;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x240) + 0x30);
  if ((lVar13 != 0) && (iVar4 = *(int *)(lVar13 + 0x30), iVar4 != 0)) {
    lVar11 = plVar10[3];
    iVar14 = 0;
    do {
      iVar2 = 0;
      if (*(int *)(lVar13 + 0x28) <= iVar14 + *(int *)(lVar13 + 0x2c)) {
        iVar2 = *(int *)(lVar13 + 0x28);
      }
      FUN_0328d930(lVar13,*(undefined8 *)
                           (*(long *)(lVar13 + 0x20) +
                           (long)(iVar14 + (*(int *)(lVar13 + 0x2c) - iVar2)) * 8),1,1,1,1,lVar11);
      iVar14 = iVar14 + 1;
    } while (iVar4 != iVar14);
  }
  return;
}

