
ulong FUN_001f6630(long param_1,char *param_2)

{
  byte *__s;
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  long lVar13;
  ulong uVar14;
  undefined8 local_1060;
  
  if (*(ulong *)(param_2 + 8) < *(ulong *)(param_2 + 0x20)) {
    return 0xfffffffffffffed4;
  }
  __s = (byte *)(param_1 + 0x1040);
  iVar6 = *(int *)(param_1 + 0x1078);
  if (iVar6 != 2) {
    if (iVar6 != 1) {
      if (iVar6 != 0) {
        return 0xfffffffffffffed4;
      }
      memset(__s,0,0xe);
      bVar4 = *__s | *param_2 << 7;
      *__s = bVar4;
      bVar4 = (param_2[1] & 7U) << 4 | bVar4;
      *__s = bVar4;
      *__s = bVar4 | param_2[2] & 0xfU;
      bVar4 = *(byte *)(param_1 + 0x1041) | param_2[0x10] << 7;
      *(byte *)(param_1 + 0x1041) = bVar4;
      uVar7 = *(ulong *)(param_2 + 8);
      if (((byte)param_2[2] >> 3 & 1) == 0) {
        if (uVar7 < 0x7e) goto LAB_001f6758;
        if (uVar7 >> 0x10 == 0) {
          uVar5 = FUN_001f63d0();
          local_1060 = CONCAT62(local_1060._2_6_,uVar5);
          *(byte *)(param_1 + 0x1041) = *(byte *)(param_1 + 0x1041) | 0x7e;
          memcpy((void *)(param_1 + 0x1042),&local_1060,2);
          __dest = (void *)(param_1 + 0x1044);
          cVar3 = param_2[0x10];
        }
        else {
          if ((long)uVar7 < 0) {
            return 0xfffffffffffffed4;
          }
          local_1060 = FUN_001f6e90();
          *(byte *)(param_1 + 0x1041) = *(byte *)(param_1 + 0x1041) | 0x7f;
          memcpy((void *)(param_1 + 0x1042),&local_1060,8);
          __dest = (void *)(param_1 + 0x104a);
          cVar3 = param_2[0x10];
        }
      }
      else {
        if (0x7d < uVar7) {
          return 0xfffffffffffffed4;
        }
LAB_001f6758:
        *(byte *)(param_1 + 0x1041) = bVar4 | (byte)uVar7;
        __dest = (void *)(param_1 + 0x1042);
        cVar3 = param_2[0x10];
      }
      if (cVar3 != '\0') {
        iVar6 = (**(code **)(param_1 + 0x1090))
                          ((void *)(param_1 + 0x1071),4,*(undefined8 *)(param_1 + 0x1098));
        if (iVar6 != 0) {
          return 0xfffffffffffffed3;
        }
        *(undefined1 *)(param_1 + 0x1070) = 1;
        memcpy(__dest,(void *)(param_1 + 0x1071),4);
        __dest = (void *)((long)__dest + 4);
      }
      *(byte **)(param_1 + 0x1050) = __s;
      *(void **)(param_1 + 0x1058) = __dest;
      *(undefined4 *)(param_1 + 0x1078) = 1;
      uVar10 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x1068) = 0;
      *(undefined8 *)(param_1 + 0x1060) = uVar10;
    }
    lVar13 = *(long *)(param_1 + 0x1058) - *(long *)(param_1 + 0x1050);
    lVar8 = (**(code **)(param_1 + 0x1080))
                      (*(long *)(param_1 + 0x1050),lVar13,*(long *)(param_2 + 0x20) != 0,
                       *(undefined8 *)(param_1 + 0x1098));
    if (lVar8 < 1) {
      return 0xffffffffffffff9b;
    }
    if (lVar13 < lVar8) {
      return 0xfffffffffffffed3;
    }
    lVar8 = *(long *)(param_1 + 0x1050) + lVar8;
    *(long *)(param_1 + 0x1050) = lVar8;
    if (lVar8 != *(long *)(param_1 + 0x1058)) {
      return 0xffffffffffffff9b;
    }
    *(undefined4 *)(param_1 + 0x1078) = 2;
  }
  lVar8 = *(long *)(param_2 + 0x20);
  if (lVar8 != 0) {
    if (*(char *)(param_1 + 0x1070) == '\0') {
      uVar7 = (**(code **)(param_1 + 0x1080))
                        (*(undefined8 *)(param_2 + 0x18),lVar8,0,*(undefined8 *)(param_1 + 0x1098));
      if ((long)uVar7 < 1) {
        return 0xffffffffffffff9b;
      }
      if (*(ulong *)(param_2 + 0x20) < uVar7) {
        return 0xfffffffffffffed3;
      }
      *(ulong *)(param_1 + 0x1068) = *(long *)(param_1 + 0x1068) + uVar7;
      goto LAB_001f6944;
    }
    if (0 < lVar8) {
      uVar14 = *(ulong *)(param_2 + 0x18);
      uVar7 = 0;
      uVar1 = uVar14 + lVar8;
      do {
        uVar11 = uVar1 - uVar14;
        if (0xfff < uVar11) {
          uVar11 = 0x1000;
        }
        if (uVar11 != 0) {
          lVar8 = *(long *)(param_1 + 0x1068);
          if (uVar11 == 1) {
            uVar12 = 0;
          }
          else {
            uVar9 = 0;
            do {
              uVar2 = lVar8 + uVar9;
              uVar12 = uVar9 + 2;
              *(byte *)((long)&local_1060 + uVar9) =
                   *(byte *)(param_1 + 0x1071 + (uVar2 & 3)) ^ *(byte *)(uVar14 + uVar9);
              *(byte *)((long)&local_1060 + uVar9 + 1) =
                   *(byte *)(param_1 + 0x1071 + ((ulong)((int)uVar2 + 1) & 3)) ^
                   ((byte *)(uVar14 + uVar9))[1];
              uVar9 = uVar12;
            } while ((uVar11 & 0x1ffe) != uVar12);
          }
          if ((uVar11 & 1) != 0) {
            *(byte *)((long)&local_1060 + uVar12) =
                 *(byte *)(param_1 + ((ulong)(uint)((int)lVar8 + (int)uVar12) & 3) + 0x1071) ^
                 *(byte *)(uVar14 + uVar12);
          }
        }
        uVar9 = (**(code **)(param_1 + 0x1080))
                          (&local_1060,uVar11,0,*(undefined8 *)(param_1 + 0x1098));
        if ((long)uVar9 < 1) {
          if (uVar7 == 0) {
            return 0xffffffffffffff9b;
          }
          break;
        }
        if (uVar11 < uVar9) {
          return 0xfffffffffffffed3;
        }
        uVar14 = uVar14 + uVar9;
        uVar7 = uVar9 + uVar7;
        *(ulong *)(param_1 + 0x1068) = *(long *)(param_1 + 0x1068) + uVar9;
      } while (uVar14 < uVar1);
      goto LAB_001f6944;
    }
  }
  uVar7 = 0;
LAB_001f6944:
  if (*(long *)(param_1 + 0x1068) == *(long *)(param_1 + 0x1060)) {
    *(undefined4 *)(param_1 + 0x1078) = 0;
  }
  return uVar7;
}

