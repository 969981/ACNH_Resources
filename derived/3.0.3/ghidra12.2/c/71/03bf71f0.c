
void FUN_03bf71f0(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  void *__dest;
  uint *puVar11;
  ulong uVar12;
  
  puVar2 = (undefined8 *)(param_1 + 8) + *(uint *)(param_1 + 0x1c);
  if (1 < *(uint *)(param_1 + 0x1c)) {
    puVar2 = (undefined8 *)(param_1 + 8);
  }
  puVar11 = (uint *)*puVar2;
  puVar11[4] = 0;
  puVar11[8] = param_3;
  if (0 < (int)param_3) {
    uVar12 = 0;
    do {
      if ((long)uVar12 < (long)(int)*puVar11) {
        uVar6 = uVar12;
        if (*puVar11 <= uVar12) {
          uVar6 = 0;
        }
        __dest = (void *)(*(long *)(puVar11 + 2) + uVar6 * 0x238);
        memcpy(__dest,(void *)(param_2 + uVar12 * 0x200),0x200);
        lVar5 = nn::friends::Friend::GetNickname();
        (**(code **)(*(long *)((long)__dest + 0x200) + 0x18))((long)__dest + 0x200);
        uVar6 = (ulong)*(uint *)((long)__dest + 0x210);
        if (*(uint *)((long)__dest + 0x210) != 0) {
          lVar7 = 0;
          puVar4 = *(ushort **)((long)__dest + 0x208);
          while (puVar9 = puVar4, lVar7 != 0x7fffffff) {
            pbVar1 = (byte *)(lVar5 + lVar7);
            bVar3 = *pbVar1;
            uVar8 = (ushort)bVar3;
            if (bVar3 == 0) break;
            if ((char)bVar3 < '\0') {
              uVar8 = (ushort)bVar3;
              if ((uVar8 & 0xe0) == 0xc0) {
                if (pbVar1[1] == 0) break;
                lVar10 = 2;
                uVar8 = pbVar1[1] & 0x3f | (uVar8 & 0x1f) << 6;
              }
              else {
                if ((((uVar8 & 0xf0) != 0xe0) || (pbVar1[1] == 0)) || (pbVar1[2] == 0)) break;
                lVar10 = 3;
                uVar8 = (ushort)bVar3 << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f;
              }
            }
            else {
              lVar10 = 1;
            }
            lVar7 = lVar10 + lVar7;
            uVar6 = uVar6 - 1;
            *puVar9 = uVar8;
            puVar4 = puVar9 + 1;
            if (uVar6 == 0) break;
          }
          *puVar9 = 0;
        }
        if ((int)puVar11[4] < (int)puVar11[5]) {
          uVar6 = uVar12;
          if (*puVar11 <= uVar12) {
            uVar6 = 0;
          }
          *(ulong *)(*(long *)(puVar11 + 6) + (long)(int)puVar11[4] * 8) =
               *(long *)(puVar11 + 2) + uVar6 * 0x238;
          puVar11[4] = puVar11[4] + 1;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)puVar11[8]);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

