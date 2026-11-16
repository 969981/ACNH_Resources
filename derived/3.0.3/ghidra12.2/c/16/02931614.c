
uint FUN_02931614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  long lVar12;
  short *local_60;
  long local_58;
  
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
LAB_029316cc:
    lVar11 = 1;
LAB_02931760:
    puVar6 = &DAT_055c04a0;
  }
  else {
    if (*(long *)(lVar9 + 0x330) == 0) {
LAB_029316d4:
      lVar11 = 1;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      lVar9 = *(long *)puVar3;
      if (iVar4 == 0x758f7eaf) {
        if (lVar9 == 0) goto LAB_029316cc;
        if ((*(long *)(lVar9 + 0x330) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar9 + 0x330) + 0x238), lVar12 == 0)) goto LAB_029316d4;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        lVar11 = *(long *)(lVar9 + 0xa8);
        *(long *)(lVar9 + 0xa8) = lVar12;
        lVar9 = *(long *)puVar3;
      }
      else {
        lVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_02931760;
    }
    if (*(long *)(lVar9 + 0x330) == 0) goto LAB_02931760;
    plVar7 = *(long **)puVar2;
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar9 + 0x338));
    iVar4 = FUN_006bd550(*puVar6,0);
    if ((iVar4 != 0x758f7eaf) || (lVar9 = *(long *)puVar3, lVar9 == 0)) goto LAB_02931760;
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      plVar7 = *(long **)puVar2;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = &DAT_055cdaf8;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar8 = FUN_0290c1e0(puVar6);
  if (uVar8 != 0) {
    psVar10 = *(short **)(uVar8 + 8);
    local_58 = 0;
    local_60 = psVar10;
    if (psVar10 != (short *)0x0) {
      uVar8 = FUN_03eaa5e0(psVar10);
      if ((uVar8 & 1) == 0) {
        local_60 = (short *)0x0;
        local_58 = 0;
      }
      else {
        uVar1 = *(uint *)(psVar10 + 6);
        uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (*psVar10 != 0x5942) {
          uVar5 = uVar1;
        }
        if (uVar5 != 0) {
          local_58 = (long)psVar10 + (ulong)uVar5;
        }
      }
    }
    iVar4 = FUN_02931830(uVar8,param_2,&local_60);
    if (-1 < iVar4) {
      uVar5 = FUN_02930ed0(param_1,iVar4,param_3);
      goto joined_r0x029317f0;
    }
  }
  uVar5 = 0;
joined_r0x029317f0:
  if (lVar11 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar11;
  }
  return uVar5 & 1;
}

