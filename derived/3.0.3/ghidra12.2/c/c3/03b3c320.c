
void FUN_03b3c320(float param_1,ushort *param_2,long *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  undefined2 local_58 [2];
  float local_54;
  
  pcVar9 = *(char **)(DAT_05aebb78 + 0x90);
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    for (lVar10 = *(long *)(pcVar9 + 0x198); lVar10 != 0; lVar10 = *(long *)(lVar10 + lVar6)) {
      (**(code **)(*param_3 + 0x18))(param_3);
      (**(code **)(*param_3 + 0x18))(param_3);
      pbVar11 = (byte *)param_3[1];
      (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
      if (pbVar11 == *(byte **)(lVar10 + 0x28)) {
LAB_03b3c3f4:
        if (*(long *)(pcVar9 + 400) == 0) {
          return;
        }
        uVar7 = *(uint *)(lVar10 + 0x30);
        if (*(uint *)(pcVar9 + 0x188) <= uVar7) {
          uVar7 = 0;
        }
        lVar10 = *(long *)(DAT_05aebb88 + 0x178);
        if (lVar10 == 0) {
          return;
        }
        uVar3 = *param_2;
        if (*(ushort *)(lVar10 + 0x1f0) == uVar3) {
          lVar6 = lVar10 + 0x60;
        }
        else if (*(char *)(lVar10 + 0x28) == '\0') {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((((uVar3 != 0xffff) && (*(long *)(lVar10 + 0x30) != 0)) &&
              (uVar8 = (uint)uVar3, (int)uVar8 < *(int *)(lVar10 + 0x48))) &&
             (lVar6 = *(long *)(lVar10 + 0x30) + (ulong)uVar8 * 0xe8,
             *(ushort *)(lVar6 + 0xe0) != uVar8)) {
            lVar6 = 0;
          }
        }
        uVar3 = *(ushort *)(*(long *)(pcVar9 + 400) + (long)(int)uVar7 * 0x180);
        if (*(ushort *)(lVar10 + 0x1f0) == uVar3) {
          plVar4 = (long *)(lVar10 + 0x60);
        }
        else {
          if (*(char *)(lVar10 + 0x28) == '\0') {
            return;
          }
          if (uVar3 == 0xffff) {
            return;
          }
          if (*(long *)(lVar10 + 0x30) == 0) {
            return;
          }
          uVar7 = (uint)uVar3;
          if (*(int *)(lVar10 + 0x48) <= (int)uVar7) {
            return;
          }
          plVar4 = (long *)(*(long *)(lVar10 + 0x30) + (ulong)uVar7 * 0xe8);
          if (*(ushort *)(plVar4 + 0x1c) != uVar7) {
            return;
          }
        }
        fVar12 = 128.0;
        if (param_1 <= 128.0) {
          fVar12 = param_1;
        }
        fVar13 = -128.0;
        if (-128.0 <= param_1) {
          fVar13 = fVar12;
        }
        local_58[0] = (**(code **)(*plVar4 + 0x48))();
        local_54 = fVar13;
        FUN_03b56150(lVar6 + 0x28,local_58,0);
        return;
      }
      pbVar11 = *(byte **)(lVar10 + 0x28);
      pbVar5 = (byte *)param_3[1];
      lVar6 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar5;
        if (bVar2 != *pbVar11) break;
        if (bVar2 == 0) goto LAB_03b3c3f4;
        bVar1 = lVar6 == 0;
        pbVar11 = pbVar11 + 1;
        pbVar5 = pbVar5 + 1;
        lVar6 = lVar6 + -1;
        if (bVar1) goto LAB_03b3c3f4;
      }
      lVar6 = 8;
      if (*pbVar11 <= bVar2) {
        lVar6 = 0x10;
      }
    }
  }
  return;
}

