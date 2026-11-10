
void FUN_001c6660(long param_1,long param_2)

{
  float *pfVar1;
  char cVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  long lVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  code *pcVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 local_58;
  
  uVar12 = *(short *)(param_2 + 0x200) + 1;
  *(ushort *)(param_2 + 0x200) = uVar12;
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  if ((*(ushort *)(param_2 + 0x60) & 0xf) == 3) {
    uVar20 = 0;
    do {
      plVar17 = (long *)(puVar4 + 0x28);
      lVar21 = *(long *)(*(long *)(param_1 + 0xe0) + uVar20 * 8);
      if (*puVar5 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
        uVar8 = *puVar10;
        if (uVar8 != 0) {
          plVar17 = *(long **)(puVar4 + 0xa0);
          lVar13 = *plVar17;
          if ((ulong)(plVar17[1] - lVar13 >> 3) <= (ulong)uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar17 = (long *)(*(long *)(lVar13 + (ulong)uVar8 * 8) + 0x20);
        }
      }
      if ((*plVar17 == 0) || (lVar13 = *(long *)(*plVar17 + 0x10), lVar13 == 0)) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x10);
      }
      plVar17 = (long *)(lVar13 + 0x78);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      iVar15 = *(int *)(lVar21 + 0x58);
      (**(code **)(*plVar17 + 0x20))(plVar17);
      if (iVar15 != 0) {
        lVar21 = *(long *)(param_2 + 0x1f0);
        iVar15 = *(int *)(lVar21 + 8);
        lVar13 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + 1;
        uVar8 = iVar15 << 1;
        if (499 < uVar8) {
          uVar8 = 500;
        }
        *(uint *)(lVar21 + 8) = uVar8;
        FUN_001c7680(lVar13 + 0x40,param_2);
        return;
      }
      bVar7 = uVar20 < *(ushort *)(param_1 + 0x180);
      uVar20 = uVar20 + 1;
    } while (bVar7);
    uVar12 = *(ushort *)(param_2 + 0x200);
  }
  if (*(ulong *)(param_1 + 0x470) < (ulong)uVar12) {
    *(ulong *)(param_1 + 0x470) = (ulong)uVar12;
  }
  if (1 < uVar12) {
    *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + 1;
    uVar20 = 0;
    if (*(long *)(param_2 + 0x138) != 0) {
      uVar20 = (ulong)*(ushort *)(*(long *)(param_2 + 0x138) + 0x18);
    }
    *(ulong *)(param_1 + 0x468) = *(long *)(param_1 + 0x468) + uVar20;
  }
  puVar4 = PTR_DAT_04bcbb78;
  uVar8 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if (*puVar5 == '\0') {
LAB_001c6828:
    puVar14 = puVar4 + (ulong)uVar8 * 0x2a8 + 0x18;
    pcVar18 = *(code **)PTR_DAT_04bcc670;
    if (pcVar18 == (code *)0x0) goto LAB_001c67fc;
LAB_001c6844:
    uVar8 = *(uint *)(param_1 + 300) & 0xfffffffc;
    if (uVar8 < 0x22) {
      uVar8 = 0x21;
    }
    uVar8 = (*pcVar18)(uVar8 + (*(uint *)(param_1 + 0x128) >> 3),*(undefined2 *)(param_2 + 0x200));
  }
  else {
    puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar10 == 0) goto LAB_001c6828;
    puVar14 = (undefined *)
              (*(long *)(puVar4 + (ulong)uVar8 * 0x2a8 + 0x10) + (ulong)*puVar10 * 0x148);
    pcVar18 = *(code **)PTR_DAT_04bcc670;
    if (pcVar18 != (code *)0x0) goto LAB_001c6844;
LAB_001c67fc:
    if ((*(ushort *)(param_2 + 0x60) & 0xf) == 0) {
      iVar15 = *(int *)(puVar14 + 0xe0);
    }
    else {
      uVar8 = *(uint *)(param_1 + 300) & 0xfffffffc;
      if (uVar8 < 0x22) {
        uVar8 = 0x21;
      }
      iVar15 = uVar8 + (*(uint *)(param_1 + 0x128) >> 3);
    }
    uVar12 = *(ushort *)(param_2 + 0x200);
    pfVar1 = (float *)(puVar14 + 0xd0);
    if (*(uint *)(puVar14 + 0xd8) < (uint)uVar12 || *(uint *)(puVar14 + 0xd8) == (uint)uVar12) {
      pfVar1 = (float *)(puVar14 + 0xd4);
    }
    uVar16 = (uint)(*pfVar1 * (float)(iVar15 * (uint)uVar12));
    uVar8 = *(uint *)(puVar14 + 0xf0);
    if (uVar16 <= *(uint *)(puVar14 + 0xf0)) {
      uVar8 = uVar16;
    }
  }
  *(uint *)(*(long *)(param_2 + 0x1f0) + 8) = uVar8;
  FUN_001c7680(*(long *)(param_1 + 8) + 0x40,param_2);
  uVar8 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if (*puVar5 != '\0') {
    puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    if (*puVar10 != 0) {
      cVar2 = *(char *)(*(long *)(puVar4 + (ulong)uVar8 * 0x2a8 + 0x10) + (ulong)*puVar10 * 0x148 +
                       0xb4);
      goto joined_r0x001c695c;
    }
  }
  cVar2 = puVar4[(ulong)uVar8 * 0x2a8 + 0xcc];
joined_r0x001c695c:
  if (cVar2 != '\0') {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_58);
    }
    else {
      FUN_0018c9b0(&local_58,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = local_58;
    *(undefined8 *)(param_1 + 0x138) = local_58;
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined2 *)(param_1 + 0xc0);
  uVar9 = FUN_001b8fa0(param_1 + 0x10,&DAT_0410a683,0);
  uVar11 = (**(code **)(**(long **)(param_1 + 0x328) + 0x48))();
  uVar20 = FUN_001c96a0(uVar19,uVar3,uVar9,param_2,uVar11);
  if ((uVar20 & 1) == 0) {
    *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + 1;
  }
  return;
}

