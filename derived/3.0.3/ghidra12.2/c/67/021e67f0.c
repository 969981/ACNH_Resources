
void FUN_021e67f0(short *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  short sVar8;
  ushort uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_18;
  
  iVar3 = FUN_021d5df0();
  if (iVar3 == 1) {
    uVar14 = *(undefined8 *)PTR_DAT_04bb4130;
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = FUN_006bd550(param_2[1],0);
    local_18 = CONCAT44(local_18._4_4_,uVar4);
    puVar6 = (uint *)FUN_0079e4d0(uVar14,&local_18);
    puVar2 = PTR_DAT_04bb40a8;
    puVar1 = PTR_DAT_04bb40a0;
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        cVar7 = *PTR_DAT_04bb40a0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar2 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar2 + 0x38);
            if (-1 < (int)uVar5) {
              if ((short *)((ulong)uVar5 + (long)puVar6) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar5 + (long)puVar6);
                goto LAB_021e6b30;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar6;
          sVar8 = -2;
          if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_021e6b30;
          lVar13 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar6 + (lVar13 - (long)puVar11);
          if (lVar13 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
          *(undefined4 *)(puVar2 + 0x38) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar12 = (int *)(lVar13 + 4);
          while (piVar12[-1] != -0x44637e92) {
            piVar12 = piVar12 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_021e6b2c;
          }
          iVar3 = 0;
          if (*piVar12 != -1) {
            iVar3 = *piVar12;
          }
          *(int *)(puVar2 + 0x38) = iVar3;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021e6b2c:
      sVar8 = -2;
LAB_021e6b30:
      *param_1 = sVar8;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_0277d4ac(param_1);
      puVar2 = PTR_DAT_04bb40a8;
      puVar1 = PTR_DAT_04bb40a0;
      if ((*param_1 == -2) && (sVar8 = *(short *)PTR_DAT_04bb6298, sVar8 != -1)) {
        local_18 = CONCAT44(local_18._4_4_,0x1a);
        puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
        if (0xff < (uint)(int)sVar8) {
          puVar11 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar11 >> 0x1a & 1) != 0) {
          if (*puVar6 != 0) {
            cVar7 = *PTR_DAT_04bb40a0;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
                *(undefined4 *)(puVar2 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              }
              else {
                uVar5 = *(uint *)(puVar2 + 0x3c);
                if (-1 < (int)uVar5) {
                  if ((ushort *)((ulong)uVar5 + (long)puVar6) != (ushort *)0x0) {
                    uVar9 = *(ushort *)((ulong)uVar5 + (long)puVar6);
                    goto LAB_021e6ca0;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)*puVar6;
              uVar9 = 0xfffe;
              if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_021e6ca0;
              lVar13 = 0xc;
              if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar6 + (lVar13 - (long)puVar11);
              if (lVar13 == 0) break;
              uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
              *(undefined4 *)(puVar2 + 0x3c) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar12 = (int *)(lVar13 + 4);
              while (piVar12[-1] != 0x4bccce37) {
                piVar12 = piVar12 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto LAB_021e6c9c;
              }
              iVar3 = 0;
              if (*piVar12 != -1) {
                iVar3 = *piVar12;
              }
              *(int *)(puVar2 + 0x3c) = iVar3;
              if (*puVar6 == 0) break;
            } while( true );
          }
LAB_021e6c9c:
          uVar9 = 0xfffe;
LAB_021e6ca0:
          local_18 = (ulong)uVar9;
          FUN_0277d4ac(&local_18);
          *(undefined4 *)param_1 = (undefined4)local_18;
          *(undefined4 *)(param_1 + 2) = local_18._4_4_;
        }
      }
      FUN_0277d6c4(param_1);
      return;
    }
  }
  else if (iVar3 == 0) {
    uVar14 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = FUN_006bd550(param_2[1],0);
    local_18 = CONCAT44(local_18._4_4_,uVar4);
    puVar6 = (uint *)FUN_0079e770(uVar14,&local_18);
    puVar2 = PTR_DAT_04bb40b8;
    puVar1 = PTR_DAT_04bb40b0;
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 == 0) {
LAB_021e6a9c:
        sVar8 = -2;
LAB_021e6aa0:
        *param_1 = sVar8;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        FUN_0277d4ac(param_1);
        puVar1 = PTR_DAT_04bb43c0;
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(param_1);
        if (*(long *)puVar1 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            return;
          }
        }
        local_18 = 0x1c0c;
        FUN_0277d4ac(&local_18);
        *(undefined4 *)param_1 = (undefined4)local_18;
        *(undefined4 *)(param_1 + 2) = local_18._4_4_;
        return;
      }
      cVar7 = *PTR_DAT_04bb40b0;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar2 + 0x54);
          if (-1 < (int)uVar5) {
            if ((short *)((ulong)uVar5 + (long)puVar6) != (short *)0x0) {
              sVar8 = *(short *)((ulong)uVar5 + (long)puVar6);
              goto LAB_021e6aa0;
            }
            goto LAB_021e6a9c;
          }
          if (uVar5 != 0xffffffff) goto LAB_021e6a9c;
        }
        puVar11 = (uint *)(ulong)*puVar6;
        sVar8 = -2;
        if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_021e6aa0;
        lVar13 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar6 + (lVar13 - (long)puVar11);
        if (lVar13 == 0) goto LAB_021e6a9c;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
        *(undefined4 *)(puVar2 + 0x54) = 0xfffffffe;
        if (uVar10 == 0) goto LAB_021e6a9c;
        piVar12 = (int *)(lVar13 + 4);
        while (piVar12[-1] != -0x44637e92) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_021e6a9c;
        }
        iVar3 = 0;
        if (*piVar12 != -1) {
          iVar3 = *piVar12;
        }
        *(int *)(puVar2 + 0x54) = iVar3;
        if (*puVar6 == 0) goto LAB_021e6a9c;
      } while( true );
    }
  }
  param_1[0] = 0x1c0c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0277d4ac(param_1);
  return;
}

