
undefined2 FUN_002c8090(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined2 uVar11;
  ulong uVar12;
  undefined1 auStack_a8 [24];
  undefined2 local_90;
  undefined *local_88;
  undefined4 local_80 [8];
  
  lVar7 = FUN_0026c868(*(undefined8 *)PTR_DAT_04bcd350);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x104) != '\0') {
      local_80[0] = 0;
      local_88 = (undefined *)0x80000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_88);
      puVar6 = PTR_DAT_04bcba18;
      uVar4 = *(ushort *)(lVar7 + 0xe6);
      if ((ulong)uVar4 != 0) {
        uVar12 = 0;
        puVar1 = PTR_DAT_04bcba18 + 0x10;
        do {
          if ((uVar12 < *(ushort *)(lVar7 + 0xe6)) && (*(long *)(lVar7 + 0xa8) != 0)) {
            lVar3 = *(long *)(lVar7 + 0xa8) + uVar12 * 0x80;
            uVar8 = FUN_002b4488(param_2,lVar3);
            if (((uVar8 & 1) != 0) &&
               ((uVar8 = FUN_002b449c(param_2,lVar3), (uVar8 & 1) != 0 &&
                (uVar8 = FUN_002b44b0(param_2,lVar3), (uVar8 & 1) != 0)))) {
              uVar8 = FUN_002b44d4(param_2);
              if ((uVar8 & 1) == 0) {
                uVar9 = FUN_002b4368(lVar3);
                FUN_0021f508(auStack_a8,uVar9);
                uVar8 = FUN_002b44c4(param_2);
                if ((uVar8 & 1) == 0) goto LAB_002c82b4;
LAB_002c8320:
                uVar8 = FUN_002b444c(lVar3);
                if ((uVar8 & 1) == 0) {
                  uVar8 = FUN_002b4420(lVar3);
                  if ((uVar8 & 1) == 0) {
LAB_002c837c:
                    uVar8 = FUN_002b440c(lVar3);
                    if ((uVar8 & 1) != 0) {
                      uVar11 = 0;
                      goto LAB_002c8410;
                    }
                  }
                  else {
                    lVar10 = FUN_002b4370(lVar3);
                    local_90 = *(undefined2 *)(lVar10 + 0x18);
                    FUN_002b4378(&local_88,param_2);
                    uVar8 = FUN_002200e4(local_80,auStack_a8);
                    local_88 = puVar6 + 0x10;
                    FUN_0021f584(local_80);
                    if ((uVar8 & 1) != 0) {
LAB_002c8404:
                      lVar7 = FUN_002b4370(lVar3);
                      goto LAB_002c840c;
                    }
                  }
                }
                else {
                  FUN_002b4378(&local_88,param_2);
                  uVar8 = FUN_002200e4(local_80,auStack_a8);
                  local_88 = puVar1;
                  FUN_0021f584(local_80);
                  if ((uVar8 & 1) != 0) {
LAB_002c83f8:
                    lVar7 = FUN_002b4368(lVar3);
LAB_002c840c:
                    uVar11 = *(undefined2 *)(lVar7 + 0x18);
LAB_002c8410:
                    FUN_0021f584(auStack_a8);
                    return uVar11;
                  }
                }
              }
              else {
                uVar9 = FUN_002b4370(lVar3);
                FUN_0021f508(auStack_a8,uVar9);
                uVar8 = FUN_002b44c4(param_2);
                if ((uVar8 & 1) != 0) goto LAB_002c8320;
LAB_002c82b4:
                FUN_002b4378(&local_88,param_2);
                uVar8 = FUN_002200e4(local_80,auStack_a8);
                local_88 = puVar6 + 0x10;
                FUN_0021f584(local_80);
                if ((uVar8 & 1) != 0) {
                  uVar8 = FUN_002b444c(lVar3);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = FUN_002b4420(lVar3);
                    if ((uVar8 & 1) != 0) goto LAB_002c8404;
                    goto LAB_002c837c;
                  }
                  goto LAB_002c83f8;
                }
              }
              FUN_0021f584(auStack_a8);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar4);
      }
      *(undefined1 *)(param_1 + 0x17cc) = 1;
      return 0;
    }
    lVar7 = FUN_002ba788(DAT_04c61168);
    plVar2 = (long *)(lVar7 + 0x88);
    uVar12 = FUN_002b44d4(param_2);
    if ((uVar12 & 1) == 0) {
      uVar9 = FUN_002b4368(plVar2);
      uVar12 = FUN_002b4488(param_2,plVar2);
    }
    else {
      uVar9 = FUN_002b4370(plVar2);
      uVar12 = FUN_002b4488(param_2,plVar2);
    }
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_002b449c(param_2,plVar2), (uVar12 & 1) != 0)) {
      FUN_002b4378(&local_88,param_2);
      uVar12 = FUN_002200e4(local_80,uVar9);
      local_88 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_80);
      if ((uVar12 & 1) != 0) {
        local_80[0] = 0;
        local_88 = (undefined *)0x80000;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_88);
        uVar12 = FUN_002b444c(plVar2);
        if ((uVar12 & 1) != 0) {
          lVar7 = FUN_002b4368(plVar2);
          return *(undefined2 *)(lVar7 + 0x18);
        }
        uVar12 = FUN_002b4420(plVar2);
        if ((uVar12 & 1) != 0) {
          lVar7 = FUN_002b4368(plVar2);
          sVar5 = *(short *)(lVar7 + 0x18);
          lVar7 = FUN_002b4370(plVar2);
          if (sVar5 != *(short *)(lVar7 + 0x18)) {
            lVar7 = FUN_002b4370(plVar2);
            return *(undefined2 *)(lVar7 + 0x18);
          }
        }
      }
    }
  }
  return 0;
}

