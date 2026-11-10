
void FUN_00108b20(long param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  bool bVar3;
  void *__dest;
  void *pvVar4;
  short sVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auStack_1a0 [268];
  ushort auStack_94 [8];
  ushort auStack_84 [10];
  int local_70;
  ushort local_6c;
  byte local_68;
  byte local_66;
  
  pvVar4 = (void *)(param_1 + 0x10);
  sVar11 = (short)param_2;
  memcpy(auStack_1a0,(void *)((long)pvVar4 + (long)sVar11 * 0x150),0x150);
  if (0 < sVar11) {
    lVar6 = (long)sVar11 + -1;
    uVar7 = *(ushort *)(param_1 + lVar6 * 0x150 + 0x144);
    uVar13 = (ulong)local_68;
    if (uVar13 == 0) {
      uVar8 = 0;
      uVar10 = (ulong)*(byte *)(param_1 + lVar6 * 0x150 + 0x148);
      if (uVar10 != 0) goto LAB_00108ba4;
      uVar9 = 0;
    }
    else {
      uVar8 = auStack_94[uVar13 * 8] & 0xc000;
      uVar10 = (ulong)*(byte *)(param_1 + lVar6 * 0x150 + 0x148);
      uVar9 = 0;
      if (uVar10 != 0) {
LAB_00108ba4:
        uVar9 = *(ushort *)(param_1 + lVar6 * 0x150 + uVar10 * 0x10 + 0x11c) & 0xc000;
      }
    }
    if ((local_66 & 0x7f) == 1) {
      uVar8 = 0;
      bVar3 = uVar7 == 0;
      if (uVar7 == 0) goto LAB_00108bd8;
    }
    else {
      bVar3 = (*(byte *)(param_1 + lVar6 * 0x150 + 0x14a) & 0x7f) != 1;
      uVar2 = 0;
      if (bVar3) {
        uVar2 = uVar9;
      }
      uVar9 = uVar2;
      uVar2 = 0;
      if (bVar3) {
        uVar2 = uVar7;
      }
      bVar3 = local_6c == uVar2;
      if (uVar2 <= local_6c) {
LAB_00108bd8:
        if ((!bVar3) ||
           ((uVar8 <= uVar9 && (*(int *)(param_1 + lVar6 * 0x150 + 0x140) <= local_70)))) {
          param_2 = param_2 + -1;
          __dest = (void *)(param_1 + (long)(short)param_2 * 0x150 + 0x160);
          do {
            uVar7 = *(ushort *)((long)__dest + -0x1c);
            if (local_68 == 0) {
              uVar8 = 0;
              uVar10 = (ulong)*(byte *)((long)__dest + -0x18);
              if (uVar10 != 0) goto LAB_00108c6c;
              uVar9 = 0;
            }
            else {
              uVar8 = auStack_94[uVar13 * 8] & 0xc000;
              uVar10 = (ulong)*(byte *)((long)__dest + -0x18);
              uVar9 = 0;
              if (uVar10 != 0) {
LAB_00108c6c:
                uVar9 = *(ushort *)((long)__dest + uVar10 * 0x10 + -0x44) & 0xc000;
              }
            }
            if ((local_66 & 0x7f) == 1) {
              uVar8 = 0;
              bVar3 = uVar7 == 0;
              if (uVar7 != 0) goto LAB_00108e5c;
            }
            else {
              bVar3 = (*(byte *)((long)__dest + -0x16) & 0x7f) != 1;
              uVar2 = 0;
              if (bVar3) {
                uVar2 = uVar9;
              }
              uVar9 = uVar2;
              uVar2 = 0;
              if (bVar3) {
                uVar2 = uVar7;
              }
              bVar3 = local_6c == uVar2;
              if (local_6c < uVar2) goto LAB_00108e5c;
            }
            if ((bVar3) && ((uVar9 < uVar8 || (local_70 <= *(int *)((long)__dest + -0x20)))))
            goto LAB_00108e5c;
            memcpy(__dest,(void *)((long)__dest + -0x150),0x150);
            param_2 = (int)(short)((short)param_2 + -1);
            __dest = (void *)((long)__dest + -0x150);
          } while (-1 < param_2);
          goto LAB_00108e60;
        }
      }
    }
  }
  sVar11 = sVar11 + 1;
  iVar12 = (int)sVar11;
  psVar1 = (short *)(param_1 + 0x9260);
  sVar5 = *psVar1;
  if (iVar12 < sVar5) {
    pvVar4 = (void *)(param_1 + (long)iVar12 * 0x150 + -0x140);
    do {
      if (local_68 == 0) {
        uVar7 = 0;
        uVar13 = (ulong)*(byte *)((long)pvVar4 + 0x288);
        if (uVar13 != 0) goto LAB_00108d68;
        uVar8 = 0;
      }
      else {
        uVar7 = auStack_94[(ulong)local_68 * 8] & 0xc000;
        uVar13 = (ulong)*(byte *)((long)pvVar4 + 0x288);
        uVar8 = 0;
        if (uVar13 != 0) {
LAB_00108d68:
          uVar8 = *(ushort *)((long)pvVar4 + uVar13 * 0x10 + 0x25c) & 0xc000;
        }
      }
      if ((local_66 & 0x7f) == 1) {
        uVar7 = 0;
        if (*(ushort *)((long)pvVar4 + 0x284) == 0) {
LAB_00108d94:
          if ((uVar7 < uVar8) || (*(int *)((long)pvVar4 + 0x280) < local_70)) goto LAB_00108e10;
        }
      }
      else {
        bVar3 = (*(byte *)((long)pvVar4 + 0x28a) & 0x7f) != 1;
        uVar9 = 0;
        if (bVar3) {
          uVar9 = *(ushort *)((long)pvVar4 + 0x284);
        }
        uVar2 = 0;
        if (bVar3) {
          uVar2 = uVar8;
        }
        uVar8 = uVar2;
        if (uVar9 < local_6c) {
LAB_00108e10:
          memcpy(pvVar4,auStack_1a0,0x150);
          sVar5 = *psVar1;
          if ((short)iVar12 < sVar5) {
            return;
          }
          goto LAB_00108e2c;
        }
        if (local_6c == uVar9) goto LAB_00108d94;
      }
      memcpy(pvVar4,(void *)((long)pvVar4 + 0x150),0x150);
      sVar11 = (short)iVar12 + 1;
      iVar12 = (int)sVar11;
      sVar5 = *psVar1;
      pvVar4 = (void *)((long)pvVar4 + 0x150);
    } while (iVar12 < sVar5);
  }
  if (sVar11 < sVar5) {
    return;
  }
LAB_00108e2c:
  __dest = (void *)(param_1 + (long)sVar5 * 0x150 + -0x140);
LAB_00108e5c:
  pvVar4 = __dest;
LAB_00108e60:
  memcpy(pvVar4,auStack_1a0,0x150);
  return;
}

