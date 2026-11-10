
void FUN_0027f680(long *param_1,undefined2 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  byte local_80 [32];
  
  uVar2 = *(ushort *)((long)param_1 + 0xe6);
  *(undefined2 *)((long)param_1 + 0xe6) = param_2;
  memset(local_80,0,0x20);
  if ((short)param_1[0x14] != 0) {
    uVar9 = 0;
    do {
      lVar11 = param_1[0x16];
      local_80[uVar9] = *(byte *)(lVar11 + uVar9);
      *(undefined1 *)(lVar11 + uVar9) = *(undefined1 *)(param_1[0x19] + uVar9);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)(param_1 + 0x14));
  }
  puVar4 = PTR_DAT_04bcd350;
  puVar3 = PTR_DAT_04bc1510;
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      if ((ulong)*(ushort *)((long)param_1 + 0xe6) != 0) {
        lVar11 = 0;
        pbVar13 = (byte *)param_1[0x19];
        do {
          if (local_80[uVar9] == *pbVar13) {
            uVar7 = FUN_002b4294(param_1[0x15] + uVar9 * 0x80,param_1[0x18] + lVar11);
            if ((uVar7 & 1) == 0) {
              plVar8 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
              lVar11 = (**(code **)(*plVar8 + 0x50))(plVar8,local_80[uVar9]);
              if (lVar11 == 0) {
                plVar8 = (long *)FUN_002ba788(*(undefined8 *)puVar3);
                lVar11 = (**(code **)(*plVar8 + 0x30))(plVar8,param_1[0x15] + uVar9 * 0x80);
                if (lVar11 != 0) goto LAB_0027f904;
              }
              else {
LAB_0027f904:
                if (*(int *)(lVar11 + 0x4c) != 7) goto LAB_0027f794;
              }
              uVar7 = (ulong)local_80[uVar9];
              if (uVar7 < 0x20) {
                bVar1 = *(byte *)((long)param_1 + uVar7 + 0x80);
                uVar10 = (ulong)bVar1;
                if (*(ushort *)(param_1 + 0x14) <= (ushort)bVar1) goto LAB_0027f794;
              }
              else {
                uVar10 = 0;
                if ((short)param_1[0x14] == 0) goto LAB_0027f794;
              }
              if ((local_80[uVar9] < 0x20) &&
                 (0xfffffffc < *(int *)(param_1[0xf] + uVar10 * 0x30) - 5U)) {
                *(undefined1 *)((long)param_1 + uVar7 + 0x80) = 0xff;
              }
              goto LAB_0027f794;
            }
            break;
          }
          lVar11 = lVar11 + 0x80;
          pbVar13 = pbVar13 + 1;
        } while ((ulong)*(ushort *)((long)param_1 + 0xe6) * 0x80 != lVar11);
      }
      uVar7 = FUN_00269a70(*(undefined8 *)puVar4,local_80[uVar9]);
      bVar1 = local_80[uVar9];
      uVar10 = (ulong)bVar1;
      if ((uVar7 & 1) == 0) {
        if (bVar1 < 0x20) {
          uVar14 = (uint)*(byte *)((long)param_1 + uVar10 + 0x80);
        }
        else {
          uVar14 = 0;
        }
        plVar8 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
        plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8,local_80[uVar9]);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_002ba788(*(undefined8 *)puVar3);
          plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,param_1[0x15] + uVar9 * 0x80);
          if (plVar8 == (long *)0x0) {
            if (uVar14 < *(ushort *)(param_1 + 0x14)) {
              if ((ulong)local_80[uVar9] < 0x20) {
                *(undefined1 *)((long)param_1 + (ulong)local_80[uVar9] + 0x80) = 0xff;
              }
              (**(code **)(*param_1 + 0x30))(param_1,param_1[0x15] + uVar9 * 0x80);
            }
            goto LAB_0027f794;
          }
        }
        if (uVar14 < *(ushort *)(param_1 + 0x14)) {
          FUN_002210f0(param_1[0xf] + (ulong)uVar14 * 0x30);
          if ((ulong)local_80[uVar9] < 0x20) {
            *(undefined1 *)((long)param_1 + (ulong)local_80[uVar9] + 0x80) = 0xff;
          }
        }
        (**(code **)(*(long *)plVar8[0x14] + 0x30))((long *)plVar8[0x14],plVar8);
        plVar5 = (long *)FUN_002ba788(*(undefined8 *)puVar3);
        (**(code **)(*plVar5 + 0x78))(plVar5,plVar8);
        uVar6 = FUN_0026c8a4(*(undefined8 *)puVar4);
        FUN_00262da0(uVar6,plVar8);
        (**(code **)(*plVar8 + 0x20))(plVar8);
        FUN_00273c40(plVar8);
        plVar5 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
        (**(code **)(*plVar5 + 0x28))(plVar5,plVar8);
        FUN_002ba5a4(*(undefined8 *)puVar3);
      }
      else if (((bVar1 < 0x20) && (bVar1 < 0x20)) &&
              ((ushort)*(byte *)((long)param_1 + uVar10 + 0x80) < *(ushort *)(param_1 + 0x14))) {
        *(undefined1 *)((long)param_1 + uVar10 + 0x80) = 0xff;
      }
LAB_0027f794:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  if (*(short *)((long)param_1 + 0xe6) != 0) {
    lVar11 = 0;
    uVar9 = 0;
    do {
      FUN_002b415c(param_1[0x15] + lVar11,param_1[0x18] + lVar11);
      lVar12 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x80;
      *(undefined2 *)(param_1[0x17] + lVar12) = *(undefined2 *)(param_1[0x1a] + lVar12);
    } while (uVar9 < *(ushort *)((long)param_1 + 0xe6));
  }
  return;
}

