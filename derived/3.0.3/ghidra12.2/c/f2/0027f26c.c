
undefined8 FUN_0027f26c(long param_1,long param_2,uint param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  ushort uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_60;
  undefined4 local_58;
  
  if (param_3 < 0xc) {
    return 0;
  }
  bVar4 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_2 + 2);
  uVar6 = FUN_00228490(param_2 + 4);
  if ((uint)*(ushort *)(param_1 + 0xa0) < (uint)bVar4) {
    return 0;
  }
  uVar10 = (uint)bVar4;
  if ((uint)bVar4 <= (uint)bVar2 && bVar2 != uVar10) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x100) < uVar6) || ((param_4 & 1) != 0)) {
    uVar11 = (uint)bVar4;
    if (*(char *)(param_2 + 8) == '\x02') {
      bVar3 = *(byte *)(param_2 + 9);
      if (*(char *)(param_1 + 0xd8) == '\0' && *(char *)(param_1 + 0xd9) == '\0') {
        *(ushort *)(param_1 + 0xda) = (ushort)bVar4;
        *(byte *)(param_1 + 0xdc) = bVar2;
        *(uint *)(param_1 + 0xe0) = uVar6;
        *(undefined1 *)(param_1 + 0xe4) = 2;
      }
      else {
        if ((((*(ushort *)(param_1 + 0xda) != uVar10) || (*(byte *)(param_1 + 0xdc) != bVar2)) ||
            (*(uint *)(param_1 + 0xe0) != uVar6)) || (*(char *)(param_1 + 0xe4) != '\x02')) {
          if (*(uint *)(param_1 + 0xe0) < uVar6) {
            *(ushort *)(param_1 + 0xda) = (ushort)bVar4;
            *(byte *)(param_1 + 0xdc) = bVar2;
            *(uint *)(param_1 + 0xe0) = uVar6;
            *(undefined1 *)(param_1 + 0xe4) = 2;
            *(undefined2 *)(param_1 + 0xd8) = 0;
          }
          else if ((param_4 & 1) == 0) {
            return 2;
          }
        }
        if (*(char *)(param_1 + (ulong)bVar3 + 0xd8) != '\0') {
          return 1;
        }
      }
      bVar4 = *(byte *)(param_2 + 10);
      bVar2 = *(byte *)(param_2 + 0xb);
      if (((uint)bVar2 + (uint)bVar4 <= uVar10) && ((uint)bVar4 * 0x44 + 0xc == param_3)) {
        if (bVar4 != 0) {
          uVar13 = 0;
          param_2 = param_2 + 0x4d;
          do {
            if (0x1f < *(byte *)(param_2 + -1)) {
              return 0;
            }
            lVar15 = (ulong)bVar2 + (ulong)uVar13;
            plVar1 = (long *)(*(long *)(param_1 + 0xc0) + lVar15 * 0x80);
            (**(code **)(*plVar1 + 0x18))(&local_60,plVar1,param_2 + -0x41);
            *(undefined1 *)(*(long *)(param_1 + 200) + lVar15) = *(undefined1 *)(param_2 + -1);
            uVar5 = FUN_002284b0(param_2);
            uVar13 = uVar13 + 1;
            param_2 = param_2 + 0x44;
            *(undefined2 *)(*(long *)(param_1 + 0xd0) + lVar15 * 2) = uVar5;
          } while (uVar13 < bVar4);
        }
        *(undefined1 *)(param_1 + 0xd8 + (ulong)bVar3) = 1;
        if (*(char *)(param_1 + 0xd8) == '\0') {
          return 1;
        }
        if (*(char *)(param_1 + 0xd9) == '\0') {
          return 1;
        }
        *(undefined1 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined1 *)(param_1 + 0xe4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        goto LAB_0027f51c;
      }
    }
    else if (((*(char *)(param_2 + 8) == '\x01') &&
             ((uint)*(ushort *)(param_1 + 0xa0) * 0x44 + 0xc == param_3)) &&
            ((*(char *)(param_2 + 9) == '\0' &&
             ((*(byte *)(param_2 + 10) == uVar11 && (*(char *)(param_2 + 0xb) == '\0')))))) {
      if (*(char *)(param_1 + 0xd8) != '\0' || *(char *)(param_1 + 0xd9) != '\0') {
        if ((uVar6 < *(uint *)(param_1 + 0xe0)) && ((param_4 & 1) == 0)) {
          return 2;
        }
        *(undefined1 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined1 *)(param_1 + 0xe4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
      }
      if (uVar11 != 0) {
        iVar7 = 0;
        cVar12 = '\0';
        do {
          iVar7 = iVar7 * 0x44;
          bVar4 = *(byte *)(param_2 + (ulong)(iVar7 + 0x4c));
          if (0x1f < bVar4) {
            return 0;
          }
          lVar15 = (long)cVar12;
          plVar1 = (long *)(*(long *)(param_1 + 0xc0) + lVar15 * 0x80);
          (**(code **)(*plVar1 + 0x18))(&local_60,plVar1,param_2 + (ulong)(iVar7 + 0xc));
          *(byte *)(*(long *)(param_1 + 200) + lVar15) = bVar4;
          uVar5 = FUN_002284b0(param_2 + (ulong)(iVar7 + 0x4d));
          cVar12 = cVar12 + '\x01';
          *(undefined2 *)(*(long *)(param_1 + 0xd0) + lVar15 * 2) = uVar5;
          iVar7 = (int)cVar12;
        } while (iVar7 < (int)uVar11);
      }
LAB_0027f51c:
      if (*(char *)(param_1 + 0x10c) == '\0') {
        return 3;
      }
      if (*(short *)(param_1 + 0xa0) != 0) {
        lVar15 = 0;
        uVar14 = 0;
        do {
          local_60 = 0x800000000000;
          local_58 = 0;
          plVar1 = (long *)(*(long *)(param_1 + 0xc0) + lVar15);
          (**(code **)(*plVar1 + 0x20))(plVar1,&local_60);
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x80;
        } while (uVar14 < *(ushort *)(param_1 + 0xa0));
      }
      FUN_0027f680(param_1,uVar11);
      bVar4 = FUN_0027c1d0(param_1);
      *(byte *)(param_1 + 0x10c) = bVar4 & 1;
      FUN_0027c0c0(param_1,0);
      *(uint *)(param_1 + 0x100) = uVar6;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      if (*(short *)(param_1 + 0xa0) != 0) {
        uVar14 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xe8) + uVar14) = 0;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(param_1 + 0xa0));
      }
      uVar8 = *(undefined8 *)(DAT_04c5fbb0 + 0x30);
      *(undefined1 *)(param_1 + 0x105) = 0;
      *(undefined8 *)(param_1 + 0xf0) = uVar8;
      if (*(char *)(param_1 + 0x10c) == '\0') {
        *(undefined1 **)(param_1 + 0x30) = &LAB_0027dab8;
        pcVar9 = "ProcessUpdateMeshJob::UpdateFailed";
      }
      else {
        uVar14 = FUN_0026c870(DAT_04c603c8);
        if ((uVar14 & 1) == 0) {
          *(undefined1 **)(param_1 + 0x30) = &LAB_0027d360;
          pcVar9 = "ProcessUpdateMeshJob::CheckConnectionAll";
        }
        else {
          *(undefined1 **)(param_1 + 0x30) = &LAB_0027ccb0;
          pcVar9 = "ProcessUpdateMeshJob::WaitDirectConnection";
        }
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar9;
      return 4;
    }
  }
  return 0;
}

