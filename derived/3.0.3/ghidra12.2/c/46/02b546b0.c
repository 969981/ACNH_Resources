
/* WARNING: Removing unreachable block (ram,0x02b54930) */

void FUN_02b546b0(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  undefined **local_70;
  undefined8 local_68;
  
  lVar6 = DAT_05635578;
  puVar5 = PTR_DAT_04bb5c18;
  uVar9 = (uint)*(ushort *)(DAT_05635578 + 0x13f0);
  uVar1 = *(short *)(DAT_05635578 + 0x13f2) + 1;
  if (*(ushort *)(DAT_05635578 + 0x13f0) != uVar1) {
    do {
      uVar2 = uVar9 & 0xffff;
      uVar9 = uVar2 - *(ushort *)(lVar6 + 0x13f0);
      if (((uVar9 < *(uint *)(lVar6 + 0x13d0)) &&
          (puVar11 = *(uint **)(*(long *)(lVar6 + 0x13d8) + (long)(int)uVar9 * 8),
          puVar11 != (uint *)0x0)) || (puVar11 = (uint *)&DAT_05634a28, (DAT_05634a30 & 1) != 0)) {
        if (*puVar11 != 0) goto LAB_02b54790;
LAB_02b54894:
        uVar9 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire(&DAT_05634a30);
        if (iVar7 != 0) {
          DAT_05634a28 = 0;
          __cxa_guard_release(&DAT_05634a30);
        }
        puVar11 = (uint *)&DAT_05634a28;
        if (DAT_05634a28 == 0) goto LAB_02b54894;
LAB_02b54790:
        cVar12 = DAT_04cf8630;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *PTR_DAT_04bb5c10 = 1;
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          }
          else {
            uVar9 = *(uint *)(puVar5 + 4);
            if (-1 < (int)uVar9) {
              if ((ushort *)((ulong)uVar9 + (long)puVar11) == (ushort *)0x0) goto LAB_02b54894;
              uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar11);
              goto LAB_02b54898;
            }
            if (uVar9 != 0xffffffff) goto LAB_02b54894;
          }
          puVar13 = (uint *)(ulong)*puVar11;
          uVar9 = 0;
          if ((*puVar11 == 0) || (puVar11 == puVar13)) goto LAB_02b54898;
          lVar3 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar11 + (lVar3 - (long)puVar13);
          if (lVar3 == 0) goto LAB_02b54894;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
          uVar9 = 0;
          if (uVar8 == 0) goto LAB_02b54898;
          piVar14 = (int *)(lVar3 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              uVar9 = 0;
              goto LAB_02b54898;
            }
          }
          iVar7 = 0;
          if (*piVar14 != -1) {
            iVar7 = *piVar14;
          }
          *(int *)(puVar5 + 4) = iVar7;
        } while (*puVar11 != 0);
        uVar9 = 0;
      }
LAB_02b54898:
      local_68 = 0;
      local_70 = &PTR_LAB_04aa47a8;
      uVar9 = uVar9 - *(ushort *)(DAT_05635578 + 0x13f0);
      if (uVar9 < *(uint *)(DAT_05635578 + 0x13d0)) {
        local_68 = *(undefined8 *)(*(long *)(DAT_05635578 + 0x13d8) + (long)(int)uVar9 * 8);
      }
      uVar8 = (**(code **)*param_1)(param_1,&local_70);
      if ((uVar8 & 1) != 0) {
        return;
      }
      uVar10 = uVar2;
      if (uVar2 <= *(ushort *)(lVar6 + 0x13f2)) {
        uVar10 = (uint)*(ushort *)(lVar6 + 0x13f2);
      }
      uVar9 = uVar2;
      do {
        while( true ) {
          if (uVar10 == uVar9) {
            uVar9 = uVar2 + 1;
            goto LAB_02b54744;
          }
          uVar4 = (uVar9 + 1 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x13f0);
          if (uVar4 < *(uint *)(lVar6 + 0x13d0)) break;
          uVar9 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (*(long *)(*(long *)(lVar6 + 0x13d8) + (long)(int)uVar4 * 8) == 0);
LAB_02b54744:
    } while ((uint)uVar1 != (uVar9 & 0xffff));
  }
  return;
}

