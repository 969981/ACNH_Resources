
void FUN_02e39650(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined *local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bb2200;
  if (*(char *)(param_1 + 0xe40) != '\0') {
    iVar8 = 0;
    do {
      lVar4 = param_1 + 0x220 + (long)iVar8 * 0x30;
      if (((*(ushort *)(lVar4 + 4) & 1) == 0) &&
         (lVar5 = param_1 + 0x220 + (long)iVar8 * 0x30, piVar6 = (int *)(lVar5 + 0x20),
         *piVar6 != -1 && *(char *)(lVar5 + 0x24) != '\0')) {
        FUN_015d7b58(*(undefined8 *)(*(long *)puVar2 + 0x140),lVar4,piVar6,0,0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x40);
  }
  puVar2 = PTR_DAT_04bc0cb8;
  if (*(int *)(param_1 + 0xe68) == 2) {
    lVar4 = 0;
  }
  else if (*(int *)(param_1 + 0xe90) == 2) {
    lVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xeb8) != 2) {
      return;
    }
    lVar4 = 2;
  }
  lVar4 = param_1 + 0xe48 + lVar4 * 0x28;
  if ((*(int *)(lVar4 + 8) == 2) && (*(uint *)(lVar4 + 4) < 0x40)) {
    lVar5 = param_1 + (ulong)*(uint *)(lVar4 + 4) * 0x30;
    if ((*(ushort *)(lVar5 + 0x224) >> 3 & 1) == 0) {
      uVar3 = FUN_015d32f4(lVar5 + 0x220);
      if ((uVar3 & 1) == 0) {
        if ((*(ushort *)(lVar5 + 0x224) >> 4 & 1) != 0) {
          uVar7 = 1;
          goto LAB_02e39818;
        }
      }
      else if (*(long *)(lVar5 + 0x228) != 0) {
        lVar9 = *(long *)(param_1 + 0xed8);
        FUN_03b137d0(lVar9,*(long *)(lVar5 + 0x228) + 0x10,0);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        plVar10 = *(long **)(param_1 + 0xec8);
        if (plVar10 != (long *)0x0) {
          local_58 = 0x14;
          *(undefined8 *)(param_1 + 0xee0) = 0x41ff000000000008;
          local_60 = puVar2 + 0x10;
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
          (**(code **)(plVar10[3] + 0x158))(plVar10[1],1);
          plVar10 = *(long **)(param_1 + 0xed0);
          if (plVar10 != (long *)0x0) {
            local_58 = 0x14;
            local_60 = puVar2 + 0x10;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
            (**(code **)(plVar10[3] + 0x158))(plVar10[1],1);
          }
        }
        uVar7 = 3;
LAB_02e39818:
        *(undefined4 *)(lVar4 + 8) = uVar7;
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0xee0);
  if (-1 < iVar8) {
    *(int *)(param_1 + 0xee0) = iVar8 + -1;
    plVar10 = *(long **)(param_1 + 0xec8);
    local_58 = 0x14;
    uVar1 = ~(int)(*(float *)(param_1 + 0xee4) * (float)iVar8);
    local_60 = puVar2 + 0x10;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
    (**(code **)(plVar10[3] + 0x158))(plVar10[1],uVar1);
    plVar10 = *(long **)(param_1 + 0xed0);
    if (plVar10 != (long *)0x0) {
      local_58 = 0x14;
      local_60 = puVar2 + 0x10;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
      (**(code **)(plVar10[3] + 0x158))(plVar10[1],uVar1);
    }
  }
  if ((*(int *)(lVar4 + 0x14) == 2) && (*(uint *)(lVar4 + 0x10) < 0x40)) {
    lVar5 = param_1 + (ulong)*(uint *)(lVar4 + 0x10) * 0x30;
    if ((*(ushort *)(lVar5 + 0x224) >> 3 & 1) == 0) {
      uVar3 = FUN_015d32f4(lVar5 + 0x220);
      if ((uVar3 & 1) == 0) {
        if ((*(ushort *)(lVar5 + 0x224) >> 4 & 1) == 0) goto LAB_02e399a0;
        uVar7 = 1;
      }
      else {
        if (*(long *)(lVar5 + 0x228) == 0) goto LAB_02e399a0;
        lVar9 = *(long *)(param_1 + 0xf00);
        FUN_03b137d0(lVar9,*(long *)(lVar5 + 0x228) + 0x10,0);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        plVar10 = *(long **)(param_1 + 0xef0);
        if (plVar10 != (long *)0x0) {
          local_58 = 0x14;
          *(undefined8 *)(param_1 + 0xf08) = 0x41ff000000000008;
          local_60 = puVar2 + 0x10;
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
          (**(code **)(plVar10[3] + 0x158))(plVar10[1],1);
          plVar10 = *(long **)(param_1 + 0xef8);
          if (plVar10 != (long *)0x0) {
            local_58 = 0x14;
            local_60 = puVar2 + 0x10;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
            (**(code **)(plVar10[3] + 0x158))(plVar10[1],1);
          }
        }
        uVar7 = 3;
      }
      *(undefined4 *)(lVar4 + 0x14) = uVar7;
    }
  }
LAB_02e399a0:
  iVar8 = *(int *)(param_1 + 0xf08);
  if (-1 < iVar8) {
    *(int *)(param_1 + 0xf08) = iVar8 + -1;
    plVar10 = *(long **)(param_1 + 0xef0);
    local_58 = 0x14;
    uVar1 = ~(int)(*(float *)(param_1 + 0xf0c) * (float)iVar8);
    local_60 = puVar2 + 0x10;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
    (**(code **)(plVar10[3] + 0x158))(plVar10[1],uVar1);
    plVar10 = *(long **)(param_1 + 0xef8);
    if (plVar10 != (long *)0x0) {
      local_58 = 0x14;
      local_60 = puVar2 + 0x10;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
      (**(code **)(plVar10[3] + 0x158))(plVar10[1],uVar1);
    }
  }
  return;
}

