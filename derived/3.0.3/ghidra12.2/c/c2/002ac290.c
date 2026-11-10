
void FUN_002ac290(long param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  byte bVar15;
  long *plVar16;
  byte bVar17;
  ulong uVar18;
  undefined4 local_9c [4];
  uint local_8c;
  uint local_88;
  ErrorResultVariant aEStack_84 [12];
  undefined *local_78;
  undefined1 local_70;
  byte local_6f;
  short local_6e;
  int local_6c;
  long local_68;
  
  if (param_2 != (void *)0x0) {
    local_88 = 0;
    local_9c[0] = 0;
    local_78 = PTR_DAT_04bce0d0 + 0x10;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)local_9c);
    if (*(int *)(param_1 + 0x8f8) != 0) {
      uVar18 = 0;
      plVar16 = (long *)(param_1 + 0x518);
      do {
        bVar9 = 0;
        if (*(char *)((long)plVar16 + 0x19) != '\0') {
          bVar9 = 2;
        }
        bVar14 = 0;
        if (*(char *)((long)plVar16 + 0x1a) != '\0') {
          bVar14 = 4;
        }
        bVar15 = 0;
        if (*(char *)(param_1 + 0x510) != '\0') {
          bVar15 = 8;
        }
        bVar17 = 0;
        if (*(char *)(param_1 + 0x511) != '\0') {
          bVar17 = 0x10;
        }
        local_6f = 0;
        if (*(char *)((long)plVar16 + 0x1b) != '\0') {
          local_6f = 0x20;
        }
        local_68 = plVar16[2];
        local_6f = bVar9 | *(byte *)(plVar16 + 3) | bVar14 | bVar15 | bVar17 | local_6f;
        local_6e = (short)*(undefined4 *)(param_1 + 0x508);
        local_6c = *(int *)(param_1 + 0x50c);
        uVar8 = FUN_002ac5bc(param_1,*plVar16);
        lVar5 = local_68;
        iVar4 = local_6c;
        sVar3 = local_6e;
        bVar9 = local_6f;
        if ((int)uVar8 < 0) {
          bVar7 = true;
          local_70 = 0x7f;
          lVar13 = *plVar16;
          uVar8 = FUN_002ac5bc(param_1,lVar13);
        }
        else {
          lVar13 = param_1 + (ulong)uVar8 * 0x28;
          bVar7 = local_6f != *(byte *)(lVar13 + 0x19);
          bVar1 = false;
          if (local_6e == *(short *)(lVar13 + 0x1a)) {
            bVar6 = false;
            if (local_6c == *(int *)(lVar13 + 0x1c)) goto LAB_002ac430;
LAB_002ac504:
            bVar6 = true;
            if (local_68 != *(long *)(lVar13 + 0x20)) goto LAB_002ac518;
LAB_002ac43c:
            bVar2 = false;
            if (bVar7) goto LAB_002ac440;
LAB_002ac524:
            iVar10 = 1;
            if (bVar1) goto LAB_002ac448;
          }
          else {
            bVar1 = true;
            bVar6 = bVar1;
            if (local_6c != *(int *)(lVar13 + 0x1c)) goto LAB_002ac504;
LAB_002ac430:
            bVar1 = bVar6;
            bVar6 = false;
            if (local_68 == *(long *)(lVar13 + 0x20)) goto LAB_002ac43c;
LAB_002ac518:
            bVar2 = true;
            if (!bVar7) goto LAB_002ac524;
LAB_002ac440:
            iVar10 = 2;
            if (bVar1) {
LAB_002ac448:
              iVar10 = iVar10 + 2;
            }
          }
          if (bVar6) {
            iVar10 = iVar10 + 4;
          }
          if (bVar2) {
            iVar10 = iVar10 + 8;
          }
          uVar8 = (((*(int *)(param_1 + 0x508) + iVar10) - 1U & 0xfffffffc) -
                  (*(int *)(param_1 + 0x508) + 0xfU & 0xfffffffc)) + *(int *)(*plVar16 + 0x5f8);
          if (0x5c0 < uVar8) {
            uVar8 = 0;
          }
          *(uint *)(*plVar16 + 0x5f8) = uVar8;
          lVar13 = *plVar16;
          local_70 = bVar7;
          uVar8 = FUN_002ac5bc(param_1,lVar13);
        }
        if ((int)uVar8 < 0) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x500);
          *(ushort *)(param_1 + 0x500) = *(ushort *)(param_1 + 0x500) + 1 & 0x1f;
        }
        puVar11 = (undefined1 *)(param_1 + (ulong)uVar8 * 0x28);
        *puVar11 = 1;
        *(long *)(puVar11 + 8) = lVar13;
        puVar11[0x18] = bVar7;
        puVar11[0x19] = bVar9;
        *(short *)(puVar11 + 0x1a) = sVar3;
        *(int *)(puVar11 + 0x1c) = iVar4;
        *(long *)(puVar11 + 0x20) = lVar5;
        FUN_002abef0(local_9c,&local_78,plVar16[1],&local_8c,0x10);
        FUN_00229780(&local_88,local_9c);
        memcpy((void *)(plVar16[1] + (ulong)local_8c),param_2,(ulong)*(uint *)(param_1 + 0x508));
        uVar12 = (ulong)*(uint *)(param_1 + 0x8f8);
        uVar18 = uVar18 + 1;
        plVar16 = plVar16 + 4;
      } while (uVar18 < uVar12);
      bVar9 = *(byte *)(param_1 + 0x8fc);
      if ((bVar9 != 0) && (*(uint *)(param_1 + 0x8f8) != 0)) {
        plVar16 = (long *)(param_1 + 0x518);
        do {
          if (*(byte *)(*plVar16 + 0x628) < bVar9) {
            *(byte *)(*plVar16 + 0x628) = bVar9;
          }
          plVar16 = plVar16 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x8f8) = 0;
  }
  return;
}

