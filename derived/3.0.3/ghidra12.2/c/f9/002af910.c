
void FUN_002af910(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  void *__src;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  
  uVar6 = *(ushort *)((long)param_4 + 0xc);
  lVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
  if (*(char *)(lVar8 + 0x1f) == '\0') {
    if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
      plVar9 = (long *)(**(code **)(*param_2 + 0x40))(param_2,param_5);
      uVar3 = *(undefined1 *)((long)param_4 + 9);
      (**(code **)(*plVar9 + 8))();
      *(ushort *)(plVar9 + 3) = uVar6;
      *(undefined1 *)((long)plVar9 + 0x1e) = uVar3;
      goto LAB_002af990;
    }
LAB_002afacc:
    local_64 = 0;
  }
  else {
LAB_002af990:
    lVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
    uVar14 = (uint)uVar6;
    if ((uint)*(ushort *)(lVar8 + 0x18) < (uint)uVar6 || *(ushort *)(lVar8 + 0x18) == uVar14) {
      lVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
      if ((int)((uVar14 - *(ushort *)(lVar8 + 0x18)) + (uint)*(ushort *)(lVar8 + 0x1c)) <
          *(int *)(lVar8 + 0x10)) {
        if ((((char)param_4[2] == '\0') ||
            ((*(uint *)((long)param_4 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c) + 0x14) >>
              (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 1) != 0)) &&
           (cVar4 = *(char *)((long)param_4 + 9),
           lVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_5), cVar4 == *(char *)(lVar8 + 0x1e)
           )) {
          lVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
          *(undefined1 *)(lVar8 + 0x1f) = 1;
          uVar12 = (uint)*(ushort *)(lVar8 + 0x1a);
          lVar15 = *(long *)(lVar8 + 8);
          uVar14 = (uVar14 - *(ushort *)(lVar8 + 0x18)) + (uint)*(ushort *)(lVar8 + 0x1c);
          uVar2 = *(uint *)(lVar8 + 0x10);
          iVar7 = *(int *)(lVar8 + 0x14);
          if ((uint)*(ushort *)(lVar8 + 0x1a) <= (uVar14 & 0xffff)) {
            uVar13 = uVar12;
            do {
              uVar12 = uVar12 + iVar7;
              uVar13 = uVar13 + 1;
              uVar1 = 0;
              if (uVar2 <= uVar12) {
                uVar1 = uVar2;
              }
              *(undefined1 *)(lVar15 + (ulong)(uVar12 - uVar1) * 0x5b0) = 0;
              uVar12 = uVar13 & 0xffff;
            } while (uVar12 <= (uVar14 & 0xffff));
            *(short *)(lVar8 + 0x1a) = (short)uVar13;
          }
          uVar14 = iVar7 + uVar14;
          *(undefined1 *)(param_2 + 199) = 1;
          uVar12 = 0;
          if (uVar2 <= uVar14) {
            uVar12 = uVar2;
          }
          uVar14 = uVar14 - uVar12;
          pcVar16 = (char *)(lVar15 + (ulong)uVar14 * 0x5b0);
          if (*pcVar16 == '\0') {
            uVar10 = (**(code **)(*param_4 + 0x20))(param_4);
            __src = (void *)(param_3 + (uVar10 & 0xffffffff));
            uVar12 = (uint)*(ushort *)((long)param_4 + 10);
            if ((*(byte *)(param_4 + 1) >> 4 & 1) != 0) {
              FUN_002a8710(&local_64,param_2[0xcb],__src,*(ushort *)((long)param_4 + 10));
              if (local_64 != 0) {
                local_54 = 0;
                local_74 = 0x2c03;
                nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_54);
                piVar11 = &local_74;
                goto LAB_002afb08;
              }
              __src = *(void **)(param_2[0xcb] + 0xe8);
              uVar12 = *(uint *)(param_2[0xcb] + 0xf0);
            }
            iVar7 = (**(code **)(*param_4 + 0x20))(param_4);
            if (0x5a0 < iVar7 + uVar12) {
              local_64 = 0x10c07;
              goto LAB_002afaf0;
            }
            lVar15 = lVar15 + (ulong)uVar14 * 0x5b0;
            memcpy((void *)(lVar15 + 6),__src,(ulong)uVar12);
            *pcVar16 = '\x01';
            bVar5 = *(byte *)(param_4 + 1);
            *(short *)(lVar15 + 4) = (short)uVar12;
            *(byte *)(lVar15 + 2) = bVar5 >> 4 & 1;
            *(byte *)(lVar15 + 1) = bVar5 >> 2 & 1;
            *(long *)(lVar15 + 0x5a8) = param_2[(ulong)(byte)param_5 + 0xa7];
          }
        }
        goto LAB_002afacc;
      }
      (**(code **)(*param_2 + 0x40))(param_2,param_5);
      local_64 = 0x4c0d;
    }
    else {
      local_64 = 0;
      *(undefined1 *)(param_2 + 199) = 1;
    }
  }
LAB_002afaf0:
  local_74 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_74);
  piVar11 = &local_64;
LAB_002afb08:
  FUN_002296c4(param_1,piVar11);
  return;
}

