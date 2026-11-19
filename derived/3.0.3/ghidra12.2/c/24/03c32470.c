
ulong FUN_03c32470(long param_1,void *param_2,ulong param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  byte bVar4;
  uint3 uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  
  uVar10 = 0xffffffffffffffb8;
  if (*(size_t *)(param_1 + 0x7068) != param_5) {
    return 0xffffffffffffffb8;
  }
  if ((param_3 != 0) && (pvVar8 = *(void **)(param_1 + 0x7048), pvVar8 != param_2)) {
    lVar9 = *(long *)(param_1 + 0x7050);
    *(void **)(param_1 + 0x7060) = pvVar8;
    *(void **)(param_1 + 0x7050) = param_2;
    *(void **)(param_1 + 0x7048) = param_2;
    *(long *)(param_1 + 0x7058) = (long)param_2 + (lVar9 - (long)pvVar8);
  }
  switch(*(undefined4 *)(param_1 + 0x70a4)) {
  case 0:
    if ((*(int *)(param_1 + 0x7110) == 0) && (*param_4 >> 4 == 0x184d2a5)) {
      memcpy((void *)(param_1 + 0x271e0),param_4,param_5);
      uVar10 = 0;
      *(ulong *)(param_1 + 0x7068) = 8 - param_5;
      *(undefined4 *)(param_1 + 0x70a4) = 6;
    }
    else {
      uVar1 = 5;
      if (*(int *)(param_1 + 0x7110) == 1) {
        uVar1 = 1;
      }
      if (param_5 < uVar1) {
        *(undefined8 *)(param_1 + 0x7108) = 0xffffffffffffffb8;
      }
      else {
        bVar4 = *(byte *)((long)param_4 + (uVar1 - 1));
        lVar9 = *(long *)(&DAT_04057b20 + ((ulong)bVar4 & 3) * 8) + uVar1 +
                *(long *)(&DAT_040587a0 + ((ulong)(bVar4 >> 3) & 0x18));
        if ((bVar4 & 0x20) == 0) {
          lVar9 = lVar9 + 1;
        }
        uVar10 = lVar9 + (ulong)((uint)(bVar4 < 0x40) & (bVar4 & 0x20) >> 5);
        *(ulong *)(param_1 + 0x7108) = uVar10;
        if (uVar10 < 0xffffffffffffff89) {
          memcpy((void *)(param_1 + 0x271e0),param_4,param_5);
          lVar9 = uVar10 - param_5;
          uVar10 = 0;
          *(long *)(param_1 + 0x7068) = lVar9;
          *(undefined4 *)(param_1 + 0x70a4) = 1;
        }
      }
    }
    break;
  case 1:
    memcpy((void *)(param_1 + 0x271e0 + (*(long *)(param_1 + 0x7108) - param_5)),param_4,param_5);
    uVar10 = FUN_03c2fb70(param_1 + 0x7070,param_1 + 0x271e0,*(undefined8 *)(param_1 + 0x7108),
                          *(undefined4 *)(param_1 + 0x7110));
    if (0xffffffffffffff88 < uVar10) {
      return uVar10;
    }
    if (uVar10 != 0) {
      return 0xffffffffffffffb8;
    }
    if ((*(int *)(param_1 + 0x708c) != 0) &&
       (*(int *)(param_1 + 0x7168) != *(int *)(param_1 + 0x708c))) {
      return 0xffffffffffffffe0;
    }
    if (*(int *)(param_1 + 0x7090) != 0) {
      *(undefined8 *)(param_1 + 0x70b0) = 0;
      *(undefined8 *)(param_1 + 0x70c8) = 0;
      *(undefined8 *)(param_1 + 0x70b8) = 0x60ea27eeadc0b5d6;
      *(undefined8 *)(param_1 + 0x70d8) = 0;
      *(undefined8 *)(param_1 + 0x70c0) = 0xc2b2ae3d27d4eb4f;
      *(undefined8 *)(param_1 + 0x70d0) = 0x61c8864e7a143579;
      *(undefined8 *)(param_1 + 0x70e0) = 0;
      *(undefined8 *)(param_1 + 0x70e8) = 0;
      *(undefined8 *)(param_1 + 0x70f0) = 0;
      *(undefined8 *)(param_1 + 0x70f8) = 0;
    }
    goto LAB_03c32810;
  case 2:
    uVar3 = (ushort)*param_4;
    uVar6 = uVar3 >> 1 & 3;
    if (uVar6 == 3) {
      return 0xffffffffffffffec;
    }
    uVar5 = CONCAT12(*(undefined1 *)((long)param_4 + 2),uVar3);
    uVar10 = (ulong)(uVar5 >> 3);
    if (uVar6 == 1) {
      *(ulong *)(param_1 + 0x7140) = uVar10;
      *(undefined8 *)(param_1 + 0x7068) = 1;
      *(undefined4 *)(param_1 + 0x70a0) = 1;
LAB_03c32784:
      uVar7 = 3;
      if ((uVar3 & 1) != 0) {
        uVar7 = 4;
      }
      *(undefined4 *)(param_1 + 0x70a4) = uVar7;
      return 0;
    }
    *(uint *)(param_1 + 0x70a0) = uVar6;
    *(ulong *)(param_1 + 0x7068) = uVar10;
    *(ulong *)(param_1 + 0x7140) = uVar10;
    if (7 < uVar5) goto LAB_03c32784;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x7090) != 0) {
        param_5 = 0;
        goto LAB_03c3289c;
      }
      goto switchD_03c324f8_caseD_7;
    }
LAB_03c32810:
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0x7068) = 3;
    *(undefined4 *)(param_1 + 0x70a4) = 2;
    break;
  case 3:
  case 4:
    iVar2 = *(int *)(param_1 + 0x70a0);
    if (iVar2 == 0) {
      if (param_2 == (void *)0x0) {
        return 0xffffffffffffffba;
      }
      if (param_3 < param_5) {
        return 0xffffffffffffffba;
      }
      memcpy(param_2,param_4,param_5);
    }
    else if (iVar2 == 1) {
      if (param_5 != 1) {
        return 0xffffffffffffffb8;
      }
      param_5 = *(size_t *)(param_1 + 0x7140);
      if (param_3 < param_5) {
        return 0xffffffffffffffba;
      }
      memset(param_2,(uint)(byte)*param_4,param_5);
    }
    else {
      if (iVar2 != 2) {
        return 0xffffffffffffffec;
      }
      param_5 = FUN_03c2ff60(param_1,param_2,param_3,param_4,param_5);
    }
    if (0xffffffffffffff88 < param_5) {
      return param_5;
    }
    *(ulong *)(param_1 + 0x7098) = *(long *)(param_1 + 0x7098) + param_5;
    if (*(int *)(param_1 + 0x7090) != 0) {
      FUN_03c36a70(param_1 + 0x70b0,param_2,param_5);
    }
    if (*(int *)(param_1 + 0x70a4) != 4) {
      *(undefined4 *)(param_1 + 0x70a4) = 2;
      *(undefined8 *)(param_1 + 0x7068) = 3;
      *(ulong *)(param_1 + 0x7048) = (long)param_2 + param_5;
      return param_5;
    }
    if ((*(long *)(param_1 + 0x7070) != -1) &&
       (*(long *)(param_1 + 0x7098) != *(long *)(param_1 + 0x7070))) {
      return 0xffffffffffffffec;
    }
    if (*(int *)(param_1 + 0x7090) != 0) {
LAB_03c3289c:
      *(undefined8 *)(param_1 + 0x7068) = 4;
      *(undefined4 *)(param_1 + 0x70a4) = 5;
      return param_5;
    }
    *(undefined8 *)(param_1 + 0x7068) = 0;
    goto LAB_03c3262c;
  case 5:
    uVar6 = FUN_03c36c10(param_1 + 0x70b0);
    if (*param_4 != uVar6) {
      return 0xffffffffffffffea;
    }
  case 7:
switchD_03c324f8_caseD_7:
    param_5 = 0;
    *(undefined8 *)(param_1 + 0x7068) = 0;
LAB_03c3262c:
    *(undefined4 *)(param_1 + 0x70a4) = 0;
    uVar10 = param_5;
    break;
  case 6:
    memcpy((void *)((param_1 - param_5) + 0x271e8),param_4,param_5);
    uVar10 = 0;
    *(ulong *)(param_1 + 0x7068) = (ulong)*(uint *)(param_1 + 0x271e4);
    *(undefined4 *)(param_1 + 0x70a4) = 7;
    break;
  default:
    uVar10 = 0xffffffffffffffff;
  }
  return uVar10;
}

