
void FUN_017343f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  long local_a0;
  int local_98;
  long local_90;
  int local_88;
  
  lVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + lVar4);
    if ((char)plVar1[0xf] != '\0') {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_0383ed30(&local_a0,param_2,plVar1[1],*(undefined1 *)((long)plVar1 + 0x71));
      if ((char)plVar1[0xe] != '\0') {
        fVar10 = (float)NEON_ucvtf((int)plVar1[0xd]);
        fVar5 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar1 + 100));
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar1 + 0x6c));
        fVar7 = sinf(fVar5 * 1.4629181e-09);
        fVar8 = sinf(fVar10 * 1.4629181e-09);
        fVar9 = sinf(fVar6 * 1.4629181e-09);
        fVar5 = cosf(fVar5 * 1.4629181e-09);
        fVar10 = cosf(fVar10 * 1.4629181e-09);
        fVar6 = cosf(fVar6 * 1.4629181e-09);
        lVar2 = plVar1[0xb];
        uVar11 = *(undefined4 *)((long)plVar1 + 0x5c);
        lVar3 = plVar1[0xc];
        if ((local_a0 != 0) && (*(int *)(local_a0 + 0x20) == local_98)) {
          *(undefined1 **)(local_a0 + 0xb4) = &DAT_3f8000003f800000;
          *(undefined4 *)(local_a0 + 0xbc) = 0x3f800000;
          *(uint *)(local_a0 + 0x184) = *(uint *)(local_a0 + 0x184) | 8;
          *(ulong *)(local_a0 + 0xd8) = CONCAT44(uVar11,-(fVar7 * fVar6) + fVar8 * fVar9 * fVar5);
          *(ulong *)(local_a0 + 0xd0) =
               CONCAT44(fVar5 * fVar6 + fVar9 * fVar7 * fVar8,fVar9 * fVar10);
          *(ulong *)(local_a0 + 0xe8) = CONCAT44((int)lVar3,fVar5 * fVar10);
          *(ulong *)(local_a0 + 0xe0) = CONCAT44(fVar7 * fVar10,-fVar8);
          *(ulong *)(local_a0 + 200) = CONCAT44((int)lVar2,fVar7 * fVar9 + fVar8 * fVar5 * fVar6);
          *(ulong *)(local_a0 + 0xc0) =
               CONCAT44(fVar7 * fVar8 * fVar6 - fVar9 * fVar5,fVar10 * fVar6);
        }
        if ((local_90 != 0) && (*(int *)(local_90 + 0x20) == local_88)) {
          *(int *)(local_90 + 0xc0) = (int)lVar2;
          *(undefined4 *)(local_90 + 0xc4) = uVar11;
          *(int *)(local_90 + 200) = (int)lVar3;
          *(ushort *)(local_90 + 0x98) = *(ushort *)(local_90 + 0x98) | 0x200;
          *(ushort *)(local_90 + 0x9a) = *(ushort *)(local_90 + 0x9a) | 0x200;
        }
      }
      if (*(char *)((long)plVar1 + 0x73) != '\0') {
        *(undefined1 *)(plVar1 + 0xf) = 0;
      }
    }
    lVar4 = lVar4 + 0x80;
  } while (lVar4 != 0x200);
  return;
}

