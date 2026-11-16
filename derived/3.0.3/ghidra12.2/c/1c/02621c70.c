
void FUN_02621c70(long param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  
  if (param_2 != (undefined2 *)0x0) {
    iVar4 = FUN_0277d6c4(param_3);
    puVar3 = PTR_DAT_04bb43c0;
    if (iVar4 == 0x16a2) {
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *param_3;
      uStack_4c = param_3[1];
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_3);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
             (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0)) {
            local_48 = lVar12;
          }
        }
      }
      uVar5 = FUN_01b0c3c8(&local_58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
      if ((uVar5 < *(uint *)(param_1 + 0xea6c0)) &&
         (puVar8 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar5 * 8),
         puVar8 != (uint *)0x0)) {
        if (*puVar8 != 0) {
          cVar9 = DAT_055576f0;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              DAT_055576f4 = 0xffffffffffffffff;
              DAT_055576fc = 0xffffffffffffffff;
              DAT_055576f0 = '\x01';
              DAT_05557704 = 0xffffffffffffffff;
              DAT_0555770c = 0xffffffffffffffff;
              DAT_05557714 = 0xffffffffffffffff;
              DAT_0555771c = 0xffffffffffffffff;
              DAT_05557724 = 0xffffffffffffffff;
              DAT_0555772c = -1;
              DAT_05557734 = 0xffffffffffffffff;
              DAT_0555773c = 0xffffffffffffffff;
              DAT_05557744 = 0xffffffffffffffff;
              DAT_0555774c = 0xffffffffffffffff;
              DAT_05557754 = 0xffffffffffffffff;
              DAT_0555775c = 0xffffffffffffffff;
            }
            else {
              if (-1 < DAT_0555772c) {
                if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar8) != (undefined2 *)0x0) {
                  local_28 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar8);
                  goto LAB_02621eb8;
                }
                break;
              }
              if (DAT_0555772c._4_4_ != 0xffffffff) break;
            }
            puVar6 = (uint *)(ulong)*puVar8;
            local_28 = 0xfffe;
            if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_02621eb8;
            lVar12 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar8 + (lVar12 - (long)puVar6);
            if (lVar12 == 0) break;
            uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
            DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
            if (uVar10 == 0) break;
            piVar7 = (int *)(lVar12 + 4);
            while (piVar7[-1] != -0x765cb7d4) {
              piVar7 = piVar7 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_02621eb4;
            }
            iVar4 = 0;
            if (*piVar7 != -1) {
              iVar4 = *piVar7;
            }
            DAT_0555772c = CONCAT44(iVar4,(undefined4)DAT_0555772c);
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_02621eb4:
        local_28 = 0xfffe;
LAB_02621eb8:
        puVar11 = &local_28;
        local_26 = 0;
        local_24 = 0;
        FUN_0277d4ac(&local_28);
      }
      else {
        puVar11 = &DAT_05586008;
      }
      uVar2 = puVar11[1];
      uVar1 = *(undefined4 *)(puVar11 + 2);
      *param_2 = *puVar11;
      param_2[1] = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar1;
    }
    else {
      *param_2 = DAT_05586008;
      *(undefined1 *)(param_2 + 1) = DAT_0558600a;
      *(undefined1 *)((long)param_2 + 3) = DAT_0558600b;
      *(undefined4 *)(param_2 + 2) = DAT_0558600c;
    }
  }
  return;
}

