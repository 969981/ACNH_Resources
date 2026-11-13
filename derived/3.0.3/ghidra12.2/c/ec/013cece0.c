
void FUN_013cece0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_160;
  byte local_158;
  undefined1 local_157;
  undefined1 local_156;
  long *local_150;
  char local_148;
  char local_147;
  char local_146;
  undefined *local_78;
  undefined8 local_70;
  int local_68;
  byte local_64;
  byte local_63;
  char local_62;
  byte local_61;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  
  puVar8 = PTR_DAT_04bb32e0;
  local_61 = *PTR_DAT_04bb32e0;
  local_78 = PTR_DAT_04bb2018 + 0x10;
  local_70 = 0;
  if (7 < local_61) {
    local_61 = 0xff;
  }
  puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = *puVar13 ^ *puVar13 << 0xb;
  uVar15 = puVar13[3];
  *puVar13 = puVar13[1];
  puVar13[1] = puVar13[2];
  uVar4 = uVar3 ^ uVar15;
  uVar5 = uVar3 >> 8 ^ uVar15 >> 0x13 ^ uVar4;
  puVar13[2] = uVar15;
  puVar13[3] = uVar5;
  bVar6 = *(byte *)((long)param_1 + 0x59a);
  uVar3 = (uint)*(byte *)((long)param_1 + 0x59d);
  if ((int)uVar5 < 0) {
    uVar3 = (uint)*(byte *)((long)param_1 + 0x59e) + (uint)bVar6;
  }
  uVar15 = 0;
  if ((int)uVar5 < 0) {
    uVar15 = (uint)bVar6;
  }
  uVar16 = (ulong)uVar15;
  uVar3 = uVar3 & 0xff;
  if (uVar15 < uVar3) {
    plVar1 = param_1 + 0x4f;
    iVar12 = uVar15 << 0x18;
    bVar10 = true;
    uVar14 = (uint)bVar6;
    uVar15 = *(byte *)((long)param_1 + 0x59b) + uVar14;
    plVar17 = plVar1 + uVar16 * 4;
    if (uVar14 <= uVar15) {
      uVar14 = uVar15;
    }
    do {
      if ((((uint)uVar16 & 0xff) < 0x14) && (iVar12 >> 0x18 < (int)uVar14)) {
        plVar2 = plVar17;
        if (0x13 < uVar16) {
          plVar2 = plVar1;
        }
        if (*(char *)((long)plVar2 + 0x19) == '\0') break;
      }
      uVar16 = uVar16 + 1;
      plVar17 = plVar17 + 4;
      iVar12 = iVar12 + 0x1000000;
      bVar10 = uVar16 < uVar3;
    } while (uVar3 != uVar16);
    if (bVar10) {
      local_64 = (byte)(uVar4 >> 0x1f);
      uVar15 = 0;
      if ((int)uVar5 < 0) {
        uVar15 = (uint)bVar6;
      }
      cVar7 = (char)uVar15;
      while (uVar5 = (uint)cVar7, (int)uVar5 < (int)uVar3) {
        if ((((uVar15 & 0xff) < 0x14) &&
            ((((int)uVar5 < (int)(uint)*(byte *)((long)param_1 + 0x59a) ||
              ((int)uVar5 <
               (int)((uint)*(byte *)((long)param_1 + 0x59b) + (uint)*(byte *)((long)param_1 + 0x59a)
                    ))) && (*(char *)((long)param_1 + (ulong)uVar5 * 0x20 + 0x291) == '\0')))) &&
           (uVar16 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar15), (uVar16 & 1) != 0)) {
          local_63 = (byte)uVar15;
          uVar16 = (**(code **)(*param_1 + 0x118))(param_1,&local_68,uVar4 >> 0x1f);
          if (((uVar16 & 1) == 0) ||
             (uVar16 = (**(code **)(*param_1 + 0x120))(param_1,&local_78,local_68,local_64),
             (uVar16 & 1) == 0)) {
            (**(code **)(*param_1 + 0x138))(param_1);
            return;
          }
          if (local_68 == 0x105d) {
            FUN_0071c7c4(&local_150,PTR_DAT_04bbc7c0,0);
            plVar17 = local_150;
            if (local_150 != (long *)0x0) {
              if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar12 != 0)) {
                *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc7a8);
              }
              uVar16 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bbc7a0);
              if ((uVar16 & 1) == 0) {
                local_147 = '\0';
              }
            }
            if ((((local_150 != (long *)0x0) && (local_148 != '\0')) && (local_147 != '\0')) &&
               (local_146 != '\0')) {
              FUN_013e852c(local_150,0);
            }
          }
          local_62 = '\0';
          if (*(byte *)(param_1 + 0xb5) < 0xfb) {
            local_62 = *(byte *)(param_1 + 0xb5) + 1;
          }
          *(char *)(param_1 + 0xb5) = local_62;
          FUN_007091b4(&local_150);
          (**(code **)(*param_1 + 0x128))(param_1,&local_150,&local_78);
          uVar11 = (**(code **)(*param_1 + 0x178))(param_1,&local_150);
          if ((ulong)local_63 < 0x14) {
            *(undefined4 *)(param_1 + (ulong)local_63 + 0x9f) = uVar11;
          }
          (**(code **)(*param_1 + 0x140))(param_1);
          local_160 = 0xfffe;
          FUN_0277d4ac(&local_160);
          uVar9 = local_70._4_4_;
          local_158 = 0xff;
          local_46 = 0;
          local_44 = 0;
          uVar11 = (undefined4)local_70;
          local_48 = (undefined2)local_68;
          FUN_0277d4ac(&local_48);
          local_158 = *puVar8;
          local_157 = 1;
          uVar16 = (ulong)local_63;
          if (7 < local_158) {
            local_158 = 0xff;
          }
          local_160 = CONCAT44(local_44,CONCAT13(local_46._1_1_,
                                                 CONCAT12((undefined1)local_46,local_48)));
          local_156 = (undefined1)param_1[0xb5];
          if (uVar16 < 0x14) {
            *(undefined2 *)(plVar1 + uVar16 * 4 + 2) = local_48;
            *(undefined1 *)((long)plVar1 + uVar16 * 0x20 + 0x12) = (undefined1)local_46;
            *(undefined1 *)((long)plVar1 + uVar16 * 0x20 + 0x13) = local_46._1_1_;
            *(undefined4 *)((long)plVar1 + uVar16 * 0x20 + 0x14) = local_44;
            *(byte *)(plVar1 + uVar16 * 4 + 3) = local_158;
            *(undefined1 *)((long)plVar1 + uVar16 * 0x20 + 0x19) = 1;
            *(undefined1 *)((long)plVar1 + uVar16 * 0x20 + 0x1a) = local_156;
            *(undefined4 *)(plVar1 + uVar16 * 4 + 1) = uVar11;
            *(undefined4 *)((long)plVar1 + uVar16 * 0x20 + 0xc) = uVar9;
          }
          if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
            return;
          }
          (**(code **)(*param_1 + 0x130))(param_1,&local_150,PTR_DAT_04bb32e0);
          return;
        }
        uVar15 = uVar15 + 1;
        cVar7 = (char)uVar15;
      }
    }
  }
  return;
}

