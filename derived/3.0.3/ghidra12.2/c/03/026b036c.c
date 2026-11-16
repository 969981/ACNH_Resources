
void FUN_026b036c(long param_1,int *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 uVar10;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined *local_40;
  char *local_38;
  
  if (param_2 == (int *)0x0) {
    if (DAT_05574040 == 0) {
      return;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0xe7290) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar4 + 0xe7290), puVar6 == (undefined8 *)0x0)) {
      piVar1 = (int *)(*(long *)(lVar4 + 0xe7278) + *(long *)(lVar4 + 0xe7270));
      iVar9 = *piVar1;
      local_48 = *(undefined8 *)(piVar1 + 1);
      local_40 = *(undefined **)(piVar1 + 3);
      uVar10 = (undefined1)piVar1[6];
      local_38 = (char *)CONCAT44(local_38._4_4_,piVar1[5]);
      local_4c = *(undefined2 *)((long)piVar1 + 0x19);
      local_4a = *(undefined1 *)((long)piVar1 + 0x1b);
    }
    else {
      uVar5 = (**(code **)*puVar6)();
      piVar1 = (int *)(*(long *)(lVar4 + 0xe7278) + *(long *)(lVar4 + 0xe7270));
      local_48 = *(undefined8 *)(piVar1 + 1);
      local_40 = *(undefined **)(piVar1 + 3);
      iVar9 = *piVar1;
      uVar10 = (undefined1)piVar1[6];
      local_38 = (char *)CONCAT44(local_38._4_4_,piVar1[5]);
      local_4c = *(undefined2 *)((long)piVar1 + 0x19);
      local_4a = *(undefined1 *)((long)piVar1 + 0x1b);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0xe7290) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0xe7290) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 1);
    local_40 = *(undefined **)(param_2 + 3);
    local_4c = *(undefined2 *)((long)param_2 + 0x19);
    local_4a = *(undefined1 *)((long)param_2 + 0x1b);
    local_38 = (char *)CONCAT44(local_38._4_4_,param_2[5]);
    iVar9 = *param_2;
    uVar10 = (undefined1)param_2[6];
  }
  if (iVar9 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x10684);
  piVar7 = (int *)(param_1 + 0x1072c);
  if (*piVar7 != 0) {
    *(undefined8 *)(param_1 + 0x10748) = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0x10750) = *(undefined8 *)(param_1 + 0x10734);
    *(undefined8 *)(param_1 + 0x10758) = *(undefined8 *)(param_1 + 0x1073c);
    *(undefined4 *)(param_1 + 0x10760) = *(undefined4 *)(param_1 + 0x10744);
  }
  piVar8 = (int *)(param_1 + 0x10710);
  if (*piVar8 != 0) {
    *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
    *(undefined8 *)(param_1 + 0x10734) = *(undefined8 *)(param_1 + 0x10718);
    *(undefined8 *)(param_1 + 0x1073c) = *(undefined8 *)(param_1 + 0x10720);
    *(undefined4 *)(param_1 + 0x10744) = *(undefined4 *)(param_1 + 0x10728);
  }
  piVar7 = (int *)(param_1 + 0x106f4);
  if (*piVar7 != 0) {
    *(undefined8 *)piVar8 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0x10718) = *(undefined8 *)(param_1 + 0x106fc);
    *(undefined8 *)(param_1 + 0x10720) = *(undefined8 *)(param_1 + 0x10704);
    *(undefined4 *)(param_1 + 0x10728) = *(undefined4 *)(param_1 + 0x1070c);
  }
  piVar8 = (int *)(param_1 + 0x106d8);
  if (*piVar8 != 0) {
    *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
    *(undefined8 *)(param_1 + 0x106fc) = *(undefined8 *)(param_1 + 0x106e0);
    *(undefined8 *)(param_1 + 0x10704) = *(undefined8 *)(param_1 + 0x106e8);
    *(undefined4 *)(param_1 + 0x1070c) = *(undefined4 *)(param_1 + 0x106f0);
  }
  piVar7 = (int *)(param_1 + 0x106bc);
  if (*piVar7 != 0) {
    *(undefined8 *)piVar8 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0x106e0) = *(undefined8 *)(param_1 + 0x106c4);
    *(undefined8 *)(param_1 + 0x106e8) = *(undefined8 *)(param_1 + 0x106cc);
    *(undefined4 *)(param_1 + 0x106f0) = *(undefined4 *)(param_1 + 0x106d4);
  }
  piVar8 = (int *)(param_1 + 0x106a0);
  if (*piVar8 != 0) {
    *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
    *(undefined8 *)(param_1 + 0x106c4) = *(undefined8 *)(param_1 + 0x106a8);
    *(undefined8 *)(param_1 + 0x106cc) = *(undefined8 *)(param_1 + 0x106b0);
    *(undefined4 *)(param_1 + 0x106d4) = *(undefined4 *)(param_1 + 0x106b8);
  }
  if (*piVar1 != 0) {
    *(undefined8 *)piVar8 = *(undefined8 *)piVar1;
    *(undefined8 *)(param_1 + 0x106a8) = *(undefined8 *)(param_1 + 0x1068c);
    *(undefined8 *)(param_1 + 0x106b0) = *(undefined8 *)(param_1 + 0x10694);
    *(undefined4 *)(param_1 + 0x106b8) = *(undefined4 *)(param_1 + 0x1069c);
  }
  *piVar1 = iVar9;
  *(undefined1 *)(param_1 + 0x1069c) = uVar10;
  *(undefined8 *)(param_1 + 0x10688) = local_48;
  *(undefined **)(param_1 + 0x10690) = local_40;
  *(undefined4 *)(param_1 + 0x10698) = local_38._0_4_;
  *(undefined2 *)(param_1 + 0x1069d) = local_4c;
  *(undefined1 *)(param_1 + 0x1069f) = local_4a;
  uVar3 = FUN_021d7d60();
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 4) != 0)) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,0,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,1,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,2,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,3,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,4,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,5,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,6,&local_40,1,1);
  }
  if ((*(int *)(param_1 + 0x29b0) != 0) && (*(int *)(param_1 + 0x2994) != 0)) {
    local_40 = puVar2 + 0x10;
    local_38 = "SameLand";
    FUN_0265d830(uVar3,7,&local_40,1,1);
  }
  return;
}

