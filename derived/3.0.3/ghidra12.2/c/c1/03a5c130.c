
uint FUN_03a5c130(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined *local_180;
  char *local_178;
  int local_170;
  char local_16c [259];
  undefined1 local_69;
  
  FUN_03a57430(param_1,param_2,*(undefined1 *)(param_1 + 0x770));
  lVar9 = *(long *)(param_3 + 8);
  lVar7 = 0;
  iVar10 = 0x7d;
  do {
    if (*(char *)(lVar9 + lVar7) == '\0') {
LAB_03a5c1b8:
      iVar10 = (int)lVar7 + 0x7d;
      break;
    }
    if (*(char *)(lVar9 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a5c1b8;
    }
    if (*(char *)(lVar9 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a5c1b8;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar7 = 0;
  do {
    if (*(char *)(param_4[1] + lVar7) == '\0') goto LAB_03a5c210;
    lVar8 = param_4[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a5c210;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a5c210;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03a5c210:
  iVar10 = iVar10 + (int)lVar7;
  lVar7 = (**(code **)(**(long **)(param_1 + 0x9b8) + 0x30))
                    (*(long **)(param_1 + 0x9b8),(long)(iVar10 + 0x3e),4);
  local_180 = PTR_DAT_04bb2030 + 0x10;
  if (iVar10 < -0x3d) {
    local_178 = (char *)0x0;
    local_170 = 0;
  }
  else {
    *(undefined1 *)(lVar7 + (ulong)(iVar10 + 0x3d)) = 0;
    local_178 = (char *)lVar7;
    local_170 = iVar10 + 0x3e;
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  FUN_038d1270(&local_180,"File = %s, Arg = %s %s %s %s, %s",
               "%AGL_ROOT%\\..\\gsys\\tools\\bat\\archiveEnvFile.bat",lVar9,
               "%AGL_ROOT%\\..\\gsys\\tools\\temporary\\tempModelSceneEnv.genvb",param_4[1],
               "--nx_nvn","WaitEnd = True, NoWindow = True, WindowStyle = Hidden");
  (**(code **)(**(long **)(param_1 + 0x9b8) + 0x38))(*(long **)(param_1 + 0x9b8),lVar7);
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_178 = "%AGL_ROOT%\\..\\gsys\\tools\\temporary\\tempModelSceneEnv.genvb";
  uVar2 = FUN_038f77e0(param_2 + 0x4a8,param_2 + 0x4b0,*(undefined8 *)(param_1 + 0x9b8),
                       *(undefined4 *)(param_1 + 0x970),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fe0 + 8),&local_180,0xffffffff);
  if ((uVar2 & 1) != 0) {
    if ((param_5 & 1) != 0) {
      FUN_03a5bf30(uVar2,param_2,param_3);
    }
    FUN_03a580c0(param_1,param_2,*(undefined8 *)(param_2 + 0x4a8),*(undefined4 *)(param_2 + 0x4b0),
                 *(undefined8 *)(param_1 + 0x9b8));
    if (*(long *)(param_2 + 0x478) != param_2 + 0x470) {
      lVar9 = (long)*(int *)(param_2 + 0x484);
      lVar7 = *(long *)(param_2 + 0x478) - lVar9;
      puVar1 = PTR_DAT_04bbd6c8 + 0x10;
      do {
        if ((*(byte *)(*(long *)(lVar7 + 0x10) + 0xf8) & 0x18) == 0x10) {
          local_69 = 0;
          local_170 = 0x104;
          local_16c[0] = '\0';
          local_180 = puVar1;
          local_178 = local_16c;
          FUN_038f67d0(&local_180,param_2 + 0x5d0,*(long *)(lVar7 + 0x10) + 8);
          lVar8 = *(long *)PTR_DAT_04bb2698;
          if (lVar8 == 0) {
            puVar5 = malloc(0x40);
          }
          else {
            plVar3 = *(long **)(param_1 + 0x9b8);
            if (plVar3 == (long *)0x0) {
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar3 = (long *)(lVar8 + 8);
              if (lVar4 != 0) {
                plVar3 = (long *)(lVar4 + 0xa8);
              }
              plVar3 = (long *)*plVar3;
              if (plVar3 == (long *)0x0) {
                puVar5 = (undefined8 *)0x0;
                goto LAB_03a5c440;
              }
            }
            puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40,8);
          }
LAB_03a5c440:
          uVar6 = *(undefined8 *)(param_1 + 0x9b8);
          *puVar5 = 0;
          puVar5[1] = 0;
          FUN_038f1770(puVar5 + 2,uVar6,&local_180,8);
          puVar5[7] = param_2;
          *(undefined1 *)(puVar5 + 6) = 1;
          puVar5[5] = 0xffffffffffffffff;
          lVar8 = *(long *)(param_1 + 0x988);
          plVar3 = (long *)((long)*(int *)(param_1 + 0x99c) + (long)puVar5);
          *(long **)(param_1 + 0x988) = plVar3;
          *plVar3 = lVar8;
          plVar3[1] = param_1 + 0x988;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 8) = plVar3;
          }
          *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x998) + 1;
        }
        lVar7 = *(long *)(lVar7 + lVar9 + 8) - lVar9;
      } while (lVar7 != (param_2 + 0x470) - lVar9);
    }
    if ((**(char **)(param_2 + 0x5d8) != '\0') && (*(int *)(param_2 + 0x98) != 0)) {
      lVar7 = (long)*(int *)(param_2 + 0x98) << 3;
      puVar5 = *(undefined8 **)(param_2 + 0xa0);
      do {
        (**(code **)(*(long *)*puVar5 + 0x28))();
        lVar7 = lVar7 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
    }
  }
  return (uint)uVar2 & 1;
}

