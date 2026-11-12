
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00874300(short param_1,char param_2,char param_3)

{
  undefined *puVar1;
  ushort *puVar2;
  short *psVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_74;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "TkkFirstLive";
  local_70 = puVar1;
  uVar8 = FUN_0273f0a0(&local_70);
  puVar5 = PTR_DAT_04bb46b0;
  if ((uVar8 & 1) == 0) {
    bVar6 = false;
  }
  else {
    uVar8 = 0;
    bVar6 = true;
    lVar15 = 0x1e33b8;
    do {
      lVar12 = *(long *)puVar5;
      local_74 = (undefined4)uVar8;
      puVar13 = *(undefined8 **)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar13 + 0x38))();
        lVar12 = 0;
        if (lVar9 != 0) {
          lVar12 = lVar9 + 0x70;
        }
        plVar14 = *(long **)(lVar12 + 0x28);
joined_r0x00874438:
        if (plVar14 != (long *)0x0) goto LAB_008743e0;
LAB_0087443c:
        uVar10 = 0;
      }
      else {
        if ((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) {
          lVar12 = 0;
          plVar14 = _DAT_00000028;
          goto joined_r0x00874438;
        }
        lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
        plVar14 = *(long **)(lVar12 + 0x28);
        if (plVar14 == (long *)0x0) goto LAB_0087443c;
LAB_008743e0:
        uVar10 = 0;
        if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
          uVar10 = (*(code *)**(undefined8 **)*plVar14)();
        }
      }
      plVar14 = (long *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + lVar15);
      lVar9 = plVar14[-1];
      lVar4 = *plVar14;
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      if ((lVar9 != 0 || lVar4 != 0) &&
         (lVar12 = FUN_026eec4c(*(undefined8 *)puVar5,uVar8 & 0xffffffff), lVar12 != 0)) {
        pcStack_68 = "TotakekeLiveCount";
        local_70 = puVar1;
        iVar7 = FUN_0274ce10(&local_74,&local_70);
        if (0 < iVar7) {
          if ((*(long **)(lVar12 + 0x18d30) == (long *)0x0) ||
             (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x18d30), puVar13 == (undefined8 *)0x0))
          {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)*puVar13)();
            uVar10 = uVar10 & 0xffffffff;
          }
          puVar2 = (ushort *)(*(long *)(lVar12 + 0x18d18) + *(long *)(lVar12 + 0x18d10));
          uVar11 = nn::time::IsValidDate
                             ((uint)*puVar2,(uint)(byte)puVar2[1],(uint)*(byte *)((long)puVar2 + 3))
          ;
          if (((((uVar11 & 1) != 0) &&
               (psVar3 = (short *)(*(long *)(lVar12 + 0x18d18) + *(long *)(lVar12 + 0x18d10)),
               *psVar3 == param_1)) && ((char)psVar3[1] == param_2)) &&
             (*(char *)((long)psVar3 + 3) == param_3)) {
            if ((uVar10 & 1) == 0) {
              return bVar6;
            }
            if (*(long *)(lVar12 + 0x18d30) == 0) {
              return bVar6;
            }
            puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x18d30) + 8);
            if (puVar13 == (undefined8 *)0x0) {
              return bVar6;
            }
            (**(code **)*puVar13)();
            return bVar6;
          }
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x18d30) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x18d30) + 8),
             puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)();
          }
        }
      }
      bVar6 = uVar8 < 7;
      uVar8 = uVar8 + 1;
      lVar15 = lVar15 + 0x48;
    } while (uVar8 != 8);
  }
  return bVar6;
}

