
undefined8
FUN_013fc880(long param_1,uint *param_2,uint param_3,undefined8 param_4,byte *param_5,
            undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_54;
  
  *param_2 = param_3;
  uVar7 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if (*(uint *)(param_1 + 0x328) <= uVar7) {
    return 0;
  }
  puVar8 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar7 * 8);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  uVar7 = *puVar8;
  if (uVar7 == 0 || puVar8 == (uint *)(ulong)uVar7) {
LAB_013fc960:
    uVar7 = 0;
  }
  else {
    puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
    if (((*puVar9 == 0) || (uVar7 = puVar9[1], uVar7 == 0)) || ((ulong)(ushort)puVar9[2] == 0))
    goto LAB_013fc960;
    lVar6 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar9 + lVar6 + (ulong)(ushort)puVar9[2] * 8;
    if (lVar6 == 0) goto LAB_013fc960;
    uVar2 = 0;
    if ((ulong)uVar7 != 0) {
      uVar2 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
    }
    if (*puVar9 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((DAT_051b69d0 <= uVar2) ||
       (uVar4 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar2 * 2), uVar7 = (uint)uVar4, 6 < uVar4))
    goto LAB_013fc960;
  }
  param_2[2] = uVar7;
  switch(param_2[2]) {
  case 0:
  case 1:
  case 2:
  case 3:
    lVar6 = FUN_013ef5e0(param_1,param_3,param_4,1);
    if (lVar6 == 0) goto switchD_013fc988_default;
    local_54 = 0;
    if ((((*param_5 & 1) != 0) &&
        (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
      *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
    }
    local_54 = 1;
    if ((((*param_5 & 2) != 0) &&
        (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
      *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
    }
    local_54 = 2;
    if (((*param_5 & 4) == 0) || (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 == 0)
       ) goto switchD_013fc988_default;
    goto LAB_013fcd18;
  case 4:
  case 6:
    goto switchD_013fc988_caseD_4;
  case 5:
    lVar6 = FUN_013ef5e0(param_1,param_3,param_4,1);
    if (lVar6 != 0) {
      local_54 = 0;
      if ((((*param_5 & 1) != 0) &&
          (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
        *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
      }
      local_54 = 1;
      if ((((*param_5 & 2) != 0) &&
          (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
        *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
      }
      local_54 = 2;
      if ((((*param_5 & 4) != 0) &&
          (sVar5 = FUN_013ef740(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
        *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
      }
    }
    if ((char)param_2[3] != '\0') goto switchD_013fc988_default;
switchD_013fc988_caseD_4:
    lVar6 = FUN_013f1ba8(param_1,param_3,param_4,0);
    if (lVar6 != 0) {
      local_54 = 0;
      if ((((*param_5 & 1) != 0) &&
          (sVar5 = FUN_013f1d00(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
        *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
      }
      local_54 = 1;
      if ((((*param_5 & 2) != 0) &&
          (sVar5 = FUN_013f1d00(param_1,lVar6,param_6,&local_54), sVar5 != 0)) && (local_54 < 3)) {
        *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
      }
      local_54 = 2;
      if (((*param_5 & 4) != 0) &&
         (sVar5 = FUN_013f1d00(param_1,lVar6,param_6,&local_54), sVar5 != 0)) {
LAB_013fcd18:
        if (local_54 < 3) {
          *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_54 & 0x1f));
        }
      }
    }
switchD_013fc988_default:
    bVar3 = (byte)param_2[1];
    cVar1 = (bVar3 >> 1 & 1) + (bVar3 & 1) + (bVar3 >> 2 & 1);
    *(bool *)(param_2 + 3) = cVar1 != '\0';
    bVar3 = *param_5;
    *(bool *)((long)param_2 + 0xd) =
         cVar1 == (byte)((bVar3 >> 1 & 1) + (bVar3 & 1) + (bVar3 >> 2 & 1));
    return 1;
  default:
    goto switchD_013fc988_default;
  }
}

