
uint FUN_0313c1b0(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined *local_70;
  char *local_68;
  
  uVar5 = FUN_03516b10(param_1 + 0x250);
  if ((uVar5 & 1) != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar9 = (long *)(param_2 + (long)iVar10 * 0x48);
      local_c8 = &DAT_0406d3be;
      local_d0 = puVar1;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puVar11 = (undefined1 *)plVar9[1];
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (puVar11 == local_c8) {
LAB_0313c3c0:
        local_d0 = (undefined *)0x0;
        local_c8 = (undefined1 *)0x0;
        local_98 = 0;
        if (auStack_90 != (undefined1 *)0x0) {
          local_d0 = (undefined *)0x400000000;
          local_c8 = auStack_90;
        }
        local_c0 = &local_b0;
        ppppuStack_b8 = &local_b0;
        local_b0 = &local_a8;
        local_a8 = &local_a0;
        local_a0 = &local_98;
        uVar4 = FUN_0376baa0(plVar9);
        local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar4);
        uVar7 = FUN_03770770(&local_70,&local_d0);
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)(param_2 + (long)iVar10 * 0x48 + 0x40) = local_d0._0_4_;
        }
      }
      else {
        uVar7 = 0;
        bVar3 = true;
        do {
          lVar8 = plVar9[1] + 2 + uVar7;
          cVar2 = *(char *)(lVar8 + -2);
          if (cVar2 != local_c8[uVar7]) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_0313c3c0;
            break;
          }
          cVar2 = *(char *)(lVar8 + -1);
          if (cVar2 != local_c8[uVar7 + 1]) break;
          if (cVar2 == '\0') goto LAB_0313c3c0;
          cVar2 = *(char *)(plVar9[1] + 2 + uVar7);
          if (cVar2 != local_c8[uVar7 + 2]) break;
          if (cVar2 == '\0') goto LAB_0313c3c0;
          bVar3 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        local_70 = PTR_DAT_04bb2020 + 0x10;
        local_68 = "hgs";
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pcVar12 = (char *)plVar9[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (pcVar12 == local_68) goto LAB_0313c3c0;
        cVar2 = *(char *)plVar9[1];
        if (cVar2 == *local_68) {
          if (cVar2 != '\0') {
            lVar8 = 0x7fffe;
            pcVar12 = local_68;
            pcVar6 = (char *)plVar9[1];
            do {
              if (pcVar6[1] != pcVar12[1]) goto LAB_0313c220;
              if (pcVar6[1] == '\0') break;
              if (pcVar6[2] != pcVar12[2]) goto LAB_0313c220;
              if (pcVar6[2] == '\0') break;
              if ((lVar8 == 0) || (cVar2 = pcVar6[3], cVar2 != pcVar12[3])) goto LAB_0313c220;
              lVar8 = lVar8 + -3;
              pcVar12 = pcVar12 + 3;
              pcVar6 = pcVar6 + 3;
            } while (cVar2 != '\0');
          }
          goto LAB_0313c3c0;
        }
      }
LAB_0313c220:
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
  }
  return uVar5 & 1;
}

