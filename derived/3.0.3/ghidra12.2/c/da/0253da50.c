
ulong FUN_0253da50(byte *param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerHalfAsleepDemoFlag";
  uVar4 = FUN_0274bce0(param_1,&local_30);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_0253dae4:
    if (7 < *pbVar6) {
LAB_0253daf0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar6;
        if (bVar5 < 8) goto LAB_0253db60;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0253dae4;
      }
      goto LAB_0253daf0;
    }
  }
  bVar5 = *pbVar6;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_0253db60:
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  if (bVar9 == bVar5) {
    lVar7 = *(long *)PTR_DAT_04bb2720;
    if (lVar7 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(lVar7 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
        iVar3 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar2 = 0;
      puVar8 = DAT_055c1b60;
      do {
        if (*(int *)(puVar8 + -1) == *(int *)(puVar10 + 7)) {
          if (sVar2 != -1) {
            uVar4 = FUN_016e6c20();
            goto joined_r0x0253dc44;
          }
          break;
        }
        puVar8 = (undefined8 *)puVar8[1];
        sVar2 = sVar2 + 1;
      } while (puVar8 != &DAT_055c1b58);
    }
    uVar4 = FUN_016e6c20(0);
joined_r0x0253dc44:
    if (((uVar4 & 1) == 0) && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
      puVar1 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 2 * 4);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      return (ulong)(*puVar1 >> 1 & 1);
    }
  }
  return 0;
}

