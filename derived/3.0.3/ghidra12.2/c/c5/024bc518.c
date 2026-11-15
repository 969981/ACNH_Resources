
undefined8 FUN_024bc518(long param_1)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x17cd) >> 3 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if (((lVar6 == 0) || (*(int *)(lVar6 + 0x15c) == 0)) || (*(int *)(lVar6 + 0x15c) == 0)) {
LAB_024bc5a8:
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      if (puVar9[0x227] == 0) {
        return 0;
      }
      uVar3 = FUN_03850890(puVar9[0x227],0x32,0,0);
joined_r0x024bc5ec:
      if ((uVar3 & 1) == 0) goto LAB_024bc784;
    }
    else {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar6 + 0x158);
      }
      bVar7 = *pbVar1;
      bVar8 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) goto LAB_024bc5a8;
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      if ((puVar9[0x227] == 0) || (uVar3 = FUN_03850890(puVar9[0x227],0x33,0,0), (uVar3 & 1) == 0))
      {
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 == 0))
          {
            puVar9 = &DAT_05240280;
            goto LAB_024bc66c;
          }
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (DAT_052413b8 != 0) goto LAB_024bc674;
LAB_024bc778:
          uVar5 = 0;
        }
        else {
LAB_024bc66c:
          if (puVar9[0x227] == 0) goto LAB_024bc778;
LAB_024bc674:
          uVar5 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
        }
        uVar3 = FUN_0170a6d0(puVar9,uVar5);
        goto joined_r0x024bc5ec;
      }
    }
    uVar4 = 1;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x800;
  }
  else {
LAB_024bc784:
    uVar4 = 0;
  }
  return uVar4;
}

