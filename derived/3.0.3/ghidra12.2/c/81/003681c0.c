
long FUN_003681c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int *param_5,long param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  
  *(undefined4 *)(param_6 + 0x40) = 0;
  *(undefined2 *)(param_6 + 0x44) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 200) = 0;
  if (param_5 == (int *)0x0) {
    puVar8 = (undefined8 *)0x0;
    if ((param_1[3] != 0) || (*(char *)(param_6 + 0xd0) == '\0')) goto LAB_003683c0;
    local_80 = param_4[8];
    uStack_78 = param_4[9];
    local_a0 = param_4[4];
    uStack_98 = param_4[5];
    local_90 = param_4[6];
    uStack_88 = param_4[7];
    local_b8 = (char *)param_4[1];
    local_c0 = CONCAT44((int)((ulong)*param_4 >> 0x20),0x31747270);
    local_b0 = param_4[2];
    uStack_a8 = param_4[3];
    local_70 = *(undefined4 *)(param_4 + 10);
    local_68 = &DAT_3f8000003f800000;
    uStack_6c = 0;
    lVar7 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,0x31747270,&local_c0,0,param_6);
    puVar8 = (undefined8 *)0x0;
    *(long **)(lVar7 + 0xe8) = param_1;
  }
  else {
    if (param_1[3] == 0) {
      lVar7 = *(long *)(param_5 + 6);
      puVar8 = (undefined8 *)0x0;
      if (lVar7 != 0) goto LAB_003683f0;
    }
    else if (*param_5 < 1) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      lVar9 = 0;
      lVar7 = 0;
      do {
        uVar3 = FUN_003606c0((long)param_4 + 0xc,*(long *)(param_5 + 2) + lVar9);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_5 + 2) != 0) {
            lVar9 = *(long *)(param_5 + 2) + lVar9;
            puVar8 = (undefined8 *)0x0;
            if (*(uint *)(lVar9 + 0x1c) != 0) {
              puVar8 = (undefined8 *)(*(long *)(param_5 + 4) + (ulong)*(uint *)(lVar9 + 0x1c));
            }
            *(ushort *)(param_6 + 0x40) = (ushort)*(byte *)(lVar9 + 0x18);
            *(ushort *)(param_6 + 0x42) = (ushort)*(byte *)(lVar9 + 0x19);
            *(ushort *)(param_6 + 0x44) = (ushort)*(byte *)(lVar9 + 0x1a);
            lVar7 = 0;
            if (*(uint *)(lVar9 + 0x24) != 0) {
              lVar7 = *(long *)(param_5 + 4) + (ulong)*(uint *)(lVar9 + 0x24);
            }
            *(long *)(param_6 + 0x48) = lVar7;
            uVar1 = *(uint *)(lVar9 + 0x20);
            if (uVar1 != 0) {
              lVar7 = 0;
              if (uVar1 != 1) {
                if (*(char *)(lVar9 + 0x1b) == '\x01') goto LAB_003683a8;
                if (*(char *)(lVar9 + 0x1b) == '\x02') {
                  lVar7 = 0;
                }
                else {
                  lVar7 = *(long *)(param_5 + 4) + (ulong)uVar1;
                }
              }
              *(long *)(param_6 + 0xc0) = lVar7;
            }
LAB_003683a8:
            if (*(char *)(lVar9 + 0x1b) != '\0') {
              *(ulong *)(param_6 + 200) = *(long *)(param_5 + 4) + (ulong)*(uint *)(lVar9 + 0x20);
            }
            goto LAB_003683c0;
          }
          break;
        }
        lVar7 = lVar7 + 1;
        lVar9 = lVar9 + 0x28;
      } while (lVar7 < *param_5);
      puVar8 = (undefined8 *)0x0;
    }
LAB_003683c0:
    lVar7 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_8,param_4,puVar8,param_6);
    if (lVar7 == 0) {
      return 0;
    }
  }
LAB_003683f0:
  if (param_1[3] == 0) {
    param_1[3] = lVar7;
  }
  if (*(long *)(param_6 + 0x98) != 0) {
    FUN_0037cfe0(*(long *)(param_6 + 0x98),lVar7);
  }
  if (param_8 != 0x31747270) {
    return lVar7;
  }
  puVar2 = param_4;
  if (puVar8 != (undefined8 *)0x0) {
    param_7 = *(undefined8 *)(param_6 + 0x38);
    puVar2 = puVar8;
  }
  FUN_0036ada8(&local_c0,lVar7,puVar2,param_7,(long)param_4 + 0x4c);
  if (*(int *)(param_6 + 0x94) < 0) {
    if (0 < (int)local_c0) {
      if (*local_b8 == '\0') {
        uVar3 = 0;
        pcVar6 = local_b8;
        do {
          pcVar6 = pcVar6 + 0x28;
          if ((local_c0 & 0xffffffff) - 1 == uVar3) goto LAB_00368468;
          uVar3 = uVar3 + 1;
        } while (*pcVar6 == '\0');
        if ((local_c0 & 0xffffffff) <= uVar3) goto LAB_00368468;
      }
      *(undefined4 *)(param_6 + 0x94) = *(undefined4 *)(param_6 + 0x90);
    }
  }
LAB_00368468:
  *(long *)(param_6 + (long)*(int *)(param_6 + 0x90) * 8 + 0x50) = lVar7 + 0xb0;
  *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + 1;
  lVar9 = (**(code **)(*param_1 + 0xa0))
                    (param_1,param_2,param_3,
                     puVar2 + (ulong)*(uint *)((long)puVar2 + 0x54) * 5 + 0xc,&local_c0,param_6);
  if (lVar9 != 0) {
    plVar4 = (long *)(lVar7 + 0xd8);
    lVar5 = *plVar4;
    *(long *)(lVar7 + 0xe8) = lVar9;
    param_1 = param_1 + 9;
    *plVar4 = *param_1;
    *(long **)(lVar5 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar4;
    *param_1 = lVar5;
  }
  *(int *)(param_6 + 0x90) = *(int *)(param_6 + 0x90) + -1;
  if (*(int *)(param_6 + 0x94) == 0) {
    *(undefined4 *)(param_6 + 0x94) = 0xffffffff;
  }
  return lVar7;
}

